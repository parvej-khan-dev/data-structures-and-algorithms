#include <iostream>
using namespace std;

bool isNumberIs2Power(int number)
{

    if (number < 1)
    {
        return false;
    }

    while (number > 1)
    {
        if (number % 2 != 0)
        {
            return false;
        }
        number = number / 2;
    }
    return true;
}

// bitwise opretor is power of 2

bool isPowerOf2(int number)
{
    long n1 = number;
    long n2 = number - 1;

    if (n1 & n2)
    {
        return false;
    }
    return true;
};

int revInt(int num)
{
    int ans = 0;
    while (num > 0)
    {
        int rem = num % 10;
        ans = ans * 10 + rem;
        num = num / 10;
    }

    return ans;
}

int main()
{

    // cout << (6 & 10) << endl;
    // cout << (6 | 10) << endl;
    // cout << (6 ^ 10) << endl;
    // cout << (10 << 2) << endl;
    // cout << (10 >> 1) << endl;

    // check if number is power of 2
    cout << isPowerOf2(32) << endl;
    cout << isPowerOf2(24) << endl;
    cout << revInt(145) << endl;
    return 0;
}

// scope resolution operator ::