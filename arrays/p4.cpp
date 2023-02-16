#include <iostream>
using namespace std;
int rotateArray1(int *, int, int);
int main()
{
    int n, d;
    cout << "enter no of elements: \n";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:\n";
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);
    cout << "enter d: ";
    cin >> d;
    rotateArray1(arr, n, d);
    return 0;
}

// mehtod 1
int rotateArray1(int *arr, int n, int d)
{
    int temp[n];
    int k = 0;

    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}