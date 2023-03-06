#include <iostream>
using namespace std;
int rotateArray1(int *, int, int);
int rotateArray2(int *, int, int);
int printArray(int *, int);
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
    printArray(arr, n);
    rotateArray2(arr, n, d);
    return 0;
}

int printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(arr + i) << " ";
    cout << endl;
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
    return 0;
}

int rotateArray2(int *arr, int n, int d)
{
    int p = 1;
    while (p <= d)
    {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}