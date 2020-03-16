#include<iostream>
using namespace std;

extern "C" void funkcja(int);
extern "C"
{
   void g(char);
   int i;
}

int main()
{
	cout << "Hello World" << endl;
	return 0;                              
}
