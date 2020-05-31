#include <iostream>

using namespace std;

void arra1(int array[], int size)
{
    for (int i = 0; i<size; i++)
    {
        cout << array[i] << endl;
    }


}

int main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {1,2,3,4,5,6,7,8,9};
    
	arra1(arr1,3);
	cout << "___________" << endl;
    arra1(arr2,9);

    return 0;
}
