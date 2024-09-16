#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}

int sumOfDigit(int n)
{
    int digitSum = 0;
    while (n > 0)
    {
        int reminder = n % 10;
        n = n / 10;
        digitSum += reminder;
    }
    return digitSum;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    cout << factorial(5) << endl;

    cout << sumOfDigit(145) << endl;
    cout << nCr(8, 2) << endl;
    return 0;
}