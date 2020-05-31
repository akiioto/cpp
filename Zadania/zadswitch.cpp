#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std; 

int switch1(string input)
{
    string inputarray[] = {"i","o"};
    int res = 3;
    for (int i = 0; i<2; i++)
    {
        if(inputarray[i]==input)
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    string input;
    cout << "i/o: ";
    cin >> input;
    switch (test(input))
    {
    case 0:
        cout << "i"<<endl;
        break;
    case 1:
        cout << "o"<<endl;
        break;
    default:
        cout<< "err0r"<<endl;
        break;
    }
    return 0;
}
