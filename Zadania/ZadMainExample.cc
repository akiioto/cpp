#include <iostream>
using namespace std;
//windows way to choose which function will output; same name, different vars
int func(int a,int b)
{
	return a*b;
}
extern "C" int func(int a,int b, int c, int d, int e, int f) {return (b*a)/(c*d)+a+f;}
int func(int a,int b,int c) {return (a*b)+c;}
int func(float a,int b,int c, int d) {return (b*c);}
int func(int a,int b, int c, int d, int e) {return (b*a)/(c*d)+a;}



int main(){
	cout << func(1, 2, 3, 4, 5) << endl;
	cout << func(1.44, 1, 2, 3) << endl;
	cout << func(1, 2, 3) << endl;
	cout << func(1, 2, 3, 4, 5, 6) << endl;
	cout << func(1, 2) << endl;
	return 0;     
}
