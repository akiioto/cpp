#include <iostream>

using namespace std;

int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *pt = arr;
    cout <<"p++ "<< p++ <<endl;;
    cout <<"++p "<< ++p <<endl;
    cout <<"++*p "<< ++*p <<endl;
    cout <<"++(*p) "<< ++(*p) <<endl;
    cout <<"++*(p) "<< ++*(p) <<endl;
    cout <<"*p++ "<< *p++ <<endl;
    cout <<"(*p)++ "<< (*p)++ << endl;
    cout <<"*(p)++ "<< *(p)++ << endl;
    cout <<"*++p "<< *++p << endl;
    cout << "*(++p) "<< *(++p)<<endl;

    return 0;
}
