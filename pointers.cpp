#include <iostream>
using namespace std;

int main()
{

    int a = 10;

    // how to store pointer address in a variable

    int *ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;
    cout << &ptr << endl;

    // pointer store other pointer address
    cout << "--------------" << endl;

    int **qtr = &ptr;
    cout << qtr << endl;
    cout << *qtr << endl;
    cout << "------dereference operator----------" << endl;

    cout << *(&a) << endl; 



    return 1;
}