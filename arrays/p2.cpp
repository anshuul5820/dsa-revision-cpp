// bsearch
#include <iostream>
using namespace std;
int b_search(int[], int, int);
int main()
{
    int n;
    cout << "enter no of elements: \n";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:\n";
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);
    int e;
    cout << "enter searchable element: ";
    cin >> e;
    cout << "element found at: " << b_search(arr, e, sizeof(arr) / sizeof(int));

    return 0;
}

int b_search(int *arr, int e, int size)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == e)
            return mid + 1;
        else if (e > arr[mid])
            low = mid + 1;
        else if (e > arr[mid])
            high = mid - 1;
    }
    return -1;
}