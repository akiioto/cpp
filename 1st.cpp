#include <iostream>
using namespace std;

int main(){
 static int x = 16;
 string y = "CL";
 float lap = 1.14;
 cout << y << x << endl << "Lap: " << lap << endl;
 cout << "Size of lap variable: " << sizeof(lap) << endl;
 auto car = "SF1000";
 cout << "Did it in: " << car << endl;
 cout << "Size of car variable: " << sizeof(car) << endl;
return 0;
}
