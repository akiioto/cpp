#include <iostream>
using namespace std;

int value(int x)
{
    x++;
    return x;
}

int &reference(int &x)
{
    x++;
    return x;
}

int *pointer(int x)
{
    x++;
    int *y = &x;
    return y;
}

int *array(int size)
{
    int arr[size];
    for (int i = 0; i<size;i++)
    {
        arr[i] = i;
    }
    for(int i= 0;i<size;i++)
    {
        cout<<arr[i]<<", ";
    }
    int *array = arr;
    return array;
}

void returnarray(int *arr)
{
    for(int i= 0;i<6;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

int main()
{
    int var = 10;
    int tab[10];
    cout << value(var) << reference(var) << pointer(var) << endl;
	int *z = array(10);
    returnarray(z);
    return 0;
}
