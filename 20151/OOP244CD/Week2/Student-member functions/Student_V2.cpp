//Upgrade set()
//Safe empty state
/*Let us upgrade our set() member function to accept external data only 

if the student number is positive-valued and the grades are A, B, C, D or F, without exception.  
If the data received from the client fails to meet all of these conditions, let us ignore that data and store values that represent an empty state.
*/
void Student::set(int n, const char* g) {
     int i;
     bool valid = true; // assume valid input, check invalidity

     if (n < 1)
         valid = false;
     else {
         for (i = 0; g[i] != '\0' && valid; i++)
             valid = g[i] >= 'A' && g[i] <= 'F' && g[i] != 'E';

     if (valid) {
         // accept client's data
         no = n;
         for (i = 0; g[i] != '\0' && i < 13; i++)
             grade[i] = g[i];
         grade[i] = '\0';  // set the last byte to the null byte 
     }
     else {
         // ignore client's data, set an empty state
         no = 0;
         grade[0] = '\0';
     }
 }
 }
 
void Student::display() const {

     if (no > 0)
         cout << no << ' ' << grade;
     else
         cout << "no data available"; 
 }