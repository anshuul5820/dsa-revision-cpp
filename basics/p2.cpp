/*Multi-D array initialization*/
#include <iostream>
using namespace std;

int main()
{
    int numbers[2][3];

    cout << "Enter 6 numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }


    //returning of array from fns: ACTUAL ARRAY isnt returned in cpp. instead, a pointer to 1st element is returned.
    return 0;
}