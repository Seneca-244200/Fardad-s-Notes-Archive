// main.cpp
// Bar Operator Overload Tester (PASS/FAIL)
// Assumes Bar.h/Bar.cpp implement the lab-required operators and conversions.

#include <iostream>
#include <sstream>
#include <cstring>
#include "Bar.h"

using namespace std;
using namespace seneca;
 int gTotal = 0;
 int gPass = 0;

 void report(bool ok, const char* testName, const string& expected = "", const string& got = "") {
   ++gTotal;
   if (ok) {
      ++gPass;
      cout << "PASS: " << testName << '\n';
   }
   else {
      cout << "FAIL: " << testName;
      if (!expected.empty() || !got.empty()) {
         cout << " (expected: " << expected << ", got: " << got << ")";
      }
      cout << '\n';
   }
}

 string outStr(const Bar& b) {
   ostringstream oss;
   oss << b;
   return oss.str();
}

 bool isSafeEmpty(const Bar& b) {
   // Safe empty: title empty AND value 0 AND bool false AND output "Empty Bar"
   const char* t = (const char*)b;
   return (!bool(b)) &&
      ((size_t)b == 0) &&
      (t && t[0] == '\0') &&
      (outStr(b) == "Empty Bar");
}

 bool eqCstr(const char* a, const char* b) {
   if (!a || !b) return false;
   return std::strcmp(a, b) == 0;
}

int main() {
   cout << "Bar Operator Overload Tester\n";
   cout << "--------------------------------------------------\n";

   // 1) Construction + Safe Empty Rules
   {
      Bar a;
      report(isSafeEmpty(a), "Default ctor => safe empty", "Empty Bar", outStr(a));

      Bar b("Coffee", 20);
      report(bool(b) == true, "Valid ctor => bool true");
      report((size_t)b == 20, "Valid ctor => value query", "20", to_string((size_t)b));
      report(eqCstr((const char*)b, "Coffee"), "Valid ctor => title query", "Coffee", (const char*)b);
      report(outStr(b) == "Coffee, 20", "Valid ctor => output format", "Coffee, 20", outStr(b));

      Bar c(nullptr, 20);
      report(isSafeEmpty(c), "nullptr title ctor => safe empty", "Empty Bar", outStr(c));

      Bar d("Tea", 80);
      report(isSafeEmpty(d), "value > 79 ctor => safe empty", "Empty Bar", outStr(d));
   }

   cout << "--------------------------------------------------\n";

   // 2) Operator-based setters: operator=(const char*), operator=(size_t)
   {
      Bar e("Water", 10);

      e = "Juice";
      report(bool(e) == true, "Assign title keeps valid");
      report(eqCstr((const char*)e, "Juice"), "operator=(const char*) sets title", "Juice", (const char*)e);
      report((size_t)e == 10, "operator=(const char*) keeps value", "10", to_string((size_t)e));

      e = nullptr;
      report(isSafeEmpty(e), "operator=(nullptr) => safe empty", "Empty Bar", outStr(e));

      e = "Juice";
      e = (size_t)5;
      report(bool(e) == true, "Assign title+value => valid");
      report(outStr(e) == "Juice, 5", "Assign title+value => output", "Juice, 5", outStr(e));

      e = (size_t)79;
      report(bool(e) == true && (size_t)e == 79, "operator=(79) => valid");

      e = (size_t)80;
      report(isSafeEmpty(e), "operator=(80) => safe empty", "Empty Bar", outStr(e));
   }

   cout << "--------------------------------------------------\n";

   // 3) += and -= with size_t (range + flooring)
   {
      Bar f("Milk", 70);
      f += (size_t)5;
      report(outStr(f) == "Milk, 75", "operator+=(size_t) within range", "Milk, 75", outStr(f));

      f += (size_t)4; // 79
      report(outStr(f) == "Milk, 79", "operator+=(size_t) to boundary 79", "Milk, 79", outStr(f));

      f += (size_t)1; // 80 => safe empty
      report(isSafeEmpty(f), "operator+=(size_t) past 79 => safe empty", "Empty Bar", outStr(f));

      Bar g("Soda", 3);
      g -= (size_t)2;
      report(outStr(g) == "Soda, 1", "operator-=(size_t) normal subtract", "Soda, 1", outStr(g));

      g -= (size_t)10; // floor at 0
      report((size_t)g == 0, "operator-=(size_t) floors at 0", "0", to_string((size_t)g));
      report(eqCstr((const char*)g, "Soda"), "operator-=(size_t) keeps title when floor to 0", "Soda", (const char*)g);
      report(bool(g) == true, "Value 0 with non-empty title is still valid (bool true)");
   }

   cout << "--------------------------------------------------\n";

   // 4) Prefix/Postfix ++ and -- (and boundary behaviour)
   {
      Bar h("Boost", 10);

      Bar r1 = ++h;
      report((size_t)h == 11, "prefix ++ updates object");
      report((size_t)r1 == 11, "prefix ++ returns updated value");

      h = "Boost";
      h = (size_t)10;
      Bar r2 = h++;
      report((size_t)r2 == 10, "postfix ++ returns old value");
      report((size_t)h == 11, "postfix ++ updates after");

      h = "Boost";
      h = (size_t)79;
      ++h;
      report(isSafeEmpty(h), "prefix ++ at 79 => safe empty", "Empty Bar", outStr(h));

      h = "Boost";
      h = (size_t)79;
      h++;
      report(isSafeEmpty(h), "postfix ++ at 79 => safe empty", "Empty Bar", outStr(h));

      Bar i("Down", 0);
      --i;
      report((size_t)i == 0, "prefix -- at 0 stays 0", "0", to_string((size_t)i));
      i--;
      report((size_t)i == 0, "postfix -- at 0 stays 0", "0", to_string((size_t)i));
   }

   cout << "--------------------------------------------------\n";

   // 5) Bar += Bar and Bar + Bar (left title policy + range rule)
   {
      Bar j("Left", 30);
      Bar k("Right", 40);

      j += k;
      report(outStr(j) == "Left, 70", "operator+=(Bar) adds values, keeps left title", "Left, 70", outStr(j));

      Bar m("A", 50);
      Bar n("B", 40);
      Bar sum = m + n; // 90 => safe empty expected
      report(isSafeEmpty(sum), "operator+(Bar) past 79 => safe empty", "Empty Bar", outStr(sum));

      // Ensure + does not mutate left operand (common expectation)
      report(outStr(m) == "A, 50", "operator+(Bar) does not mutate left operand", "A, 50", outStr(m));
   }

   cout << "--------------------------------------------------\n";

   // 6) Stream extraction >> (via read) and insertion << (via draw)
   {
      // Title line then value on next line (common pattern for full-line title)
      // If your read() uses "title value" on one line, students can adjust their tester or input format.
      {
         istringstream iss("Orange Juice\n25\n");
         Bar x;
         iss >> x;
         report(bool(x) == true, "operator>> reads valid bar => bool true");
         report(eqCstr((const char*)x, "Orange Juice"), "operator>> reads full-line title", "Orange Juice", (const char*)x);
         report((size_t)x == 25, "operator>> reads value", "25", to_string((size_t)x));
         report(outStr(x) == "Orange Juice, 25", "operator<< prints after read", "Orange Juice, 25", outStr(x));
      }

      // value > 79 => safe empty after read
      {
         istringstream iss("Too High\n99\n");
         Bar y("Init", 10);
         iss >> y;
         report(isSafeEmpty(y), "operator>> value > 79 => safe empty", "Empty Bar", outStr(y));
      }
   }

   cout << "--------------------------------------------------\n";

   // 7) Comparisons (value-based)
   {
      Bar a("A", 10), b("B", 10), c("C", 20);

      report((a == b) == true, "operator== compares values (10 == 10)");
      report((a != c) == true, "operator!= compares values (10 != 20)");
      report((a < c) == true, "operator< compares values (10 < 20)");
      report((c > b) == true, "operator> compares values (20 > 10)");
   }

   cout << "--------------------------------------------------\n";
   cout << "Result: " << gPass << "/" << gTotal << " tests passed.\n";

   return (gPass == gTotal) ? 0 : 1;
}
