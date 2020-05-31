#include <iostream>

using namespace std;

int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *pt = arr;
    int i = 9;
    cout << pt << endl;
    cout << arr[i] << endl; //ok
    cout << i[arr] << endl; //?
    i++;
    cout << *(i+arr) << endl;
    return 0;
}
