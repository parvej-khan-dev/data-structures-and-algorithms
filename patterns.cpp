#include <iostream>
using namespace std;

int main()
{

    /*** pattern print n number of
     * 1234
     * 1234
     * 1234
     * 1234
     * for n = 4
     */

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // char pattern
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }

    /**
     * 123
     * 456
     * 789
     *
     */

    int start = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << start;
            start += 1;
        }
        cout << endl;
    }

    char chStart = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << chStart;
            chStart += 1;
        }
        cout << endl;
    }
    // triangle patter
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // number tinangle patterns
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    // char tinangle patterns
    char startCh = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << startCh;
        }
        startCh += i;
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        int st = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
            st += 1;
        }
        cout << endl;
    }

    // reverse number triangle

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    // floyd's triangle patterns

    /**
    n =4 ;
    1
    23
    456
    78910
     */

    int stPoint = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << stPoint << " ";
            stPoint += 1;
        }
        cout << endl;
    }

    // char version of floyd's triangle
    char chPoint = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << chPoint << " ";
            chPoint += 1;
        }
        cout << endl;
    }

    /**
     Inverted triangle pattern
     1111
      222
       33
        4
     */

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << i + 1;
    //     }

    //     cout << endl;
    // }

    // pyramid patterns

    /***
     *                  1
     *                1 2 1
     *              1 2 3 2 1
     *            1 2 3 4 3 2 1
     */

    for (int i = 0; i < n; i++)
    {
        // first inner loop print space

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // second loop print number

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }

        // print pending number

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    /**
     *         Hollow diamond Patterns
     *                 *
     *               *   *
     *            *      *
     *              *   *
     *                *
     */
    //  Top part
    for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star

        cout << "*";

        // space
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;

        // star
    }

    for (int i = 0; i < n - 1; i++)
    {

        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }

    // butterfly patterns

    for (int i = 0; i < n; i++)
    {
        // star

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // space

        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // star

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}