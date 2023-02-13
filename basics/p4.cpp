/*pointers in cpp */
//*ptr-> * is a deferencing operator; this deferences the value at that address; otherwise address will be returned
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;

    // changing pointer value also changes original var
    *ptr = 6;

    cout << a << "\n";
    cout << *ptr << "\n";
    cout << &a << "\n";
    cout << ptr << "\n";

    /*pointer operations*/
    int var, *varPoint;

    // Wrong!
    // varPoint is an address but var is not
    //varPoint = var;

    // Wrong!
    // &var is an address
    // *varPoint is the value stored in &var
    //*varPoint = &var;

    // Correct!
    // varPoint is an address and so is &var
    varPoint = &var;

    // Correct!
    // both *varPoint and var are values
    *varPoint = var;
    return 0;
}