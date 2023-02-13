/*pointer to array in cpp */
#include <iostream>
using namespace std;
int main()
{
    int a[] = {0, 1, 2, 4};
    int *ptr;
    // stores fist val of array
    ptr = a;

    // ptr=a is same as ptr= &a[0]
    cout << ptr << "\n"
         << a;

    // ptr= &arr[2]
    // ptr - 2 is equivalent to &arr[0];
    // ptr - 1 is equivalent to &arr[1];
    // ptr + 1 is equivalent to &arr[3];
    // ptr + 2 is equivalent to &arr[4];

    // use dereference operator
    // *(ptr + 1) is equivalent to arr[1];
    // *(ptr + 2) is equivalent to arr[2];
    // *(ptr + 3) is equivalent to arr[3];
    // *(ptr + 4) is equivalent to arr[4];
    return 0;
}

/*in most cases, a separate var for pointer need  not be created, arr name can itself be used as a pointer var
Ex: 
main(){
float arr[5];    
   // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {

        // store input number in arr[i]
        cin >> *(arr + i);
    }
    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << *(arr + i) << endl ;

    }
}
*/
