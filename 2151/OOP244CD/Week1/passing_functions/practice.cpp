#include <iostream>
using namespace std;
void f1(int x, int y){ 
	x=x+4; 
	y=y+5; 
} 
void f2(int &x, int &y){ 
	x=x+4; 
	y=y+5; 
} 
void f3 (int *x, int *y){ 
	*x=*x+4; 
	*y=*y+5; 
} 

//----------------------------------------------
int main() { 
	int k=1,m=2
	cout<< "1)" << k << " " << m <<  endl; 
	f1(k,m); 
	cout<< "2)" << k << " " << m <<  endl;
	f2(k,m); 
	cout<< "3)" << k << " " << m <<  endl;
	f3(&k,&m); 
	cout<< "4)" << k << " " << m << endl;
	
	return 0; 
}
 
