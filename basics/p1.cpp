// diff methods of initialising arrays
#include <iostream>
using namespace std;
int main()
{
    int x[6] = {19, 10, 8, 17, 9, 15};

    // compiler infers size
    int y[] = {19, 10, 8, 17, 9, 15};

    // with garbage values
    int a[6] = {1, 2, 3};

    // displaying arrays
    int numbers[5] = {7, 5, 6, 12, 35};
    cout << "The numbers are: ";

    //  Printing array elements
    // using range based for loop
    for (const int &n : numbers)
        cout << n << "  ";

    /** Note: In a range-based loop, we have used the code const int &n instead of int n as the range declaration. However, the const int &n is more preferred because:

     Using int n simply copies the array elements to the variable n during each iteration. This is not memory-efficient.

     &n, however, uses the memory address of the array elements to access their data without copying them to a new variable. This is memory-efficient.
     We are simply printing the array elements, not modifying them. Therefore, we use const so as not to accidentally change the values of the array. */

    cout << "\nThe numbers are: ";

    //  Printing array elements
    // using traditional for loop
    for (int i = 0; i < 5; ++i)
        cout << numbers[i] << "  ";

    // accepting array from user
    int b[5];
    cout << "Enter array elements:\n";
    for (int i = 0; i < 5; i++)
        cin >> b[i];

    for (int i = 0; i < 5; ++i)
        cout << b[i] << "  ";

    return 0;
}