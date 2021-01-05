A)
125: print function call, passing A by value
119: copy const. of E will be called
75: operator= is called passing E
78: func setname is called passing "Fred" Cstr.
67: delete n_name is called to a null value
68: DMA to len. of "Fred" + 1 pointed by m_name
69: Fred Copied in m_name
79: m_empno is copied (12345)
80: *this is ret by ref
76: exiting copy const.
120: "The employee info:" and newline
121: operator<<(cout, E)
103: write function of E is called passing cout
99: print "Fred..................... (12345)"
99: return cout by ref
103:  cout is ret by ref
121: newline is printed
122: destructor of E is called
86: m_name memory is freed 
122: exits print function.

B)
output: 
The employee info:
Fred..................... (12345)


C) 
m_name = "Fred" dynamic
m_empno = 12345 static allocated

D)
cout << A << endl;
