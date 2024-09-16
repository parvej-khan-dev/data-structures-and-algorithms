#include <iostream>
using namespace std;
int main()
{
    // cout << "Parvej " << "\nKhan" << endl;
    int age = 25;
    cout << "int byte size is " << sizeof(age) << endl; // return byte size

    char grade = 'A';
    cout << "char byte size is " << sizeof(grade) << endl; // retrun byte size of character

    float PI = 3.14f;
    cout << "float byte size is " << sizeof(PI) << PI << endl;

    bool isSafe = true;
    cout << "bool byte size is " << sizeof(isSafe) << isSafe << endl;

    double salary = 50000.5;
    cout << "double byte size is " << sizeof(salary) << salary << endl;

    // type conversion
    // char n = 'hero';
    // int b = n; // return ascii value of character
    // cout << b << endl;

    // type casting
    double c = 100.99;
    int d = (int)c;
    cout << d << endl;

    // input in c++
    int work_exp;

    cout << "Enter your work experience: ";
    // cin >> work_exp;
    cout << "your work experience is " << work_exp << endl;

    // operators
    int x = 10;
    int y = 15;

    cout << (x + y) << "->  sum" << endl;
    cout << (x - y) << "->  minus" << endl;
    cout << (x * y) << "->  multiply" << endl;
    cout << (x / y) << "->  division" << endl;
    cout << (y % x) << "->  modeler" << endl;

    // division special if we divide int/ int always return int if we need float and double value and change the type cast

    int my_age = 10;
    int future_age = 15;
    // if we didn't do type cast here return always 1
    cout << ((double)future_age / my_age) << endl;

    // relation operator
    cout << (x == y) << endl;
    cout << (x != y) << endl;
    cout << (x > y) << endl;
    cout << (x < y) << endl;
    cout << (x >= y) << endl;
    cout << (x <= y) << endl;

    // logical operator

    cout << "\nLogical Operator" << endl;

    cout << ((x > 5) && (y > 5)) << "->  AND " << endl;

    cout << ((x > 5) || (y > 5)) << "->  OR " << endl;

    cout << (!((x > 5) && (y > 5))) << "->  NOT " << endl;

    // sum of two number
    int a, b;

    cout << "what is value of a ";
    // cin >> a;
    cout << "what is value of b ";
    // cin >> b;
    cout << "sum of a and b is " << a + b << endl;

    // uniary operator

    int z = 10;
    int k = z++; // return k = 10 , z = 11
    // if we use ++k then k = 11 , z = 11
    cout << "value of k is " << k << endl;
    cout << "value of z is " << z << endl;

    return 0;
}