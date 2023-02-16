// linear search
#include <iostream>
using namespace std;
int lsearch(int *, int, int);
int main()
{
    int arr[5];
    cout << "Enter array elements: ";
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        cin >> *(arr + i);
    cout << "Enter element to be searched: ";
    int e;
    cin >> e;
    cout << "found: " << lsearch(arr, e, sizeof(arr));

    return 0;
}

int lsearch(int *arr, int e, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == e)
            return i + 1;
    }

    return -1;
}
