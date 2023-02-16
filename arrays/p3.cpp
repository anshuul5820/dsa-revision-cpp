// reverse an array
#include <iostream>
using namespace std;
int revArray(int *, int);
int main()
{
    int n;
    cout << "enter no of elements: \n";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:\n";
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    revArray(arr, n);
    return 0;
}

int revArray(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
        cout << *(arr + i) << " ";
    return 0;
}