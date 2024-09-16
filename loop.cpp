#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    // int count = 1;
    // while (count <= n)
    // {
    //     cout << count << " ";
    //     count++;
    // }
    // cout << endl;

    //** for loop */
    // for (int c = 1; c <= n; c++)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;

    // Question 1 : sum of n number

    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum << endl;

    // break and continue
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    // sum  of odd number
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << " sum of odd number\n";

    //*** Do while loop */
    // int i = 1;
    // do
    // {
    //     cout << i << " ";
    //     i++;
    // } while (i < 5);
    // cout << endl;

    // check number is prime number
    int primeNumber = 5;
    bool isPrime = true;
    // optimize solution  run loop to sqrt(n) / i * i <= n;
    for (int i = 2; i <= sqrt(primeNumber) - 1; i++)
    {
        if (primeNumber % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << primeNumber << " is prime number" << endl;
    }
    else
    {
        cout << primeNumber << " is not prime number" << endl;
    }

    // nested loops
    int x = 5;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // sum of 1 to n number that divisible by 3

    int n3 = 10;
    int sum3 = 0;
    for (int i = 1; i <= n3; i++)
    {
        if (i % 3 == 0)
        {
            sum3 += i;
        }
    }

    cout << sum3 << " sum  of  n number that divisible by 3 \n";

    // factorial of n number
    int nf = 4;
    int fact = 1;
    for (int i = 1; i <= nf; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;

    return 0;
}