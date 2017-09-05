int a=10;
int b=20;

foo(a + b);

foo(-b);


a = !b;

foo(a += b);

foo(a = b);

foo(d = c = a = b);



a = 10;
foo(++a);
a = 10;
foo(a++);



a = b;
foo(a);


foo(a += b);