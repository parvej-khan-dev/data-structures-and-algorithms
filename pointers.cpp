#include <iostream>
using namespace std;

void changeA(int *a) // pass by reference default function is pass by value
{

    *a = 20;
}

void change(int &b) // pass by reference using alias
{
    b = 20;
}

// array pointer
void arrayPointer()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int *ptr = arr;

    cout << ptr << endl; // return address of arr[0]

    cout << *ptr << endl; // return value of arr[0]
}

// pointer athematic

void pointerAthematic()
{

    cout << "************ pointer athematic ******" << endl;
    int a = 10;
    int b = 20;
    int *p = &a;

    cout << p << endl;

    p++; // add 4 bytes

    cout << p << endl;

    p--; // subtract 4 bytes

    cout << p << endl;
    cout << a << endl;

    cout << "---------- add and subtract on array element and how to access it----------" << endl;

    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl;       // 1
    cout << *(arr + 1) << endl; // 2
    cout << *(arr + 2) << endl; // 3
    cout << *(arr + 3) << endl; // 4
    cout << *(arr + 4) << endl; // 5
}

void pointAthematicQ()
{

    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    cout << *(ptr + 1) << endl; // 20;
    cout << *(ptr + 1) << endl; // 30;

    ptr++;  // add 4 bytes

    cout << *ptr << endl; // 20

}

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

    cout << *(qtr) << endl;

    cout << "------dereference operator double pointer----------" << endl;

    cout << **(qtr) << endl;

    cout << "---------Null pointer----------" << endl;

    int *p = NULL;
    cout << p << endl;

    cout << "---------Output predication----------" << endl;

    int b = 10;
    int *p1 = &b;
    int **p2 = &p1;
    cout << p1 << endl;   // address of b
    cout << *p2 << endl;  // address of b
    cout << **p2 << endl; // value of b : 10
    cout << *p1 << endl;  // value of b : 10

    cout << "Pass by Reference using pointer" << endl;

    int c = 10;

    changeA(&c); // using pointer
    change(c);   // using alias

    cout << "Changes C value age pointer " << c << endl;

    cout << "-----Array pointer--" << endl;

    arrayPointer();

    pointerAthematic();

    return 1;
}