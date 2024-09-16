#include <iostream>
using namespace std;

int main()
{
    // int age = 14;
    // if (age > 18)
    // {
    //     cout << "you can vote" << endl;
    // }
    // else
    // {
    //     cout << "you cannot vote" << endl;
    // }

    //** if-else */
    // cout << "enter the number:";
    // int n;
    // cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "number is even" << endl;
    // }
    // else
    // {
    //     cout << "number is odd" << endl;
    // }

    //?  if , else-if , else ladder
    // int n;
    // cout << "enter the number:";
    // cin >> n;

    // if (n >= 90)
    // {
    //     cout << "A\n";
    // }
    // else if (n >= 70)
    // {
    //     cout << "B\n";
    // }
    // else
    // {
    //     cout << "C\n";
    // }

    //** Practice Question check input char is lowercase and uppercase  */

    char input;
    cout << "enter the character:";
    cin >> input;

    // a-z range : 97-122
    // A-Z range : 65-90

    if (input >= 97 && input <= 122)
    {
        cout << "lowercase" << endl;
    }
    else if (input >= 65 && input <= 90)
    {
        cout << "uppercase" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }

    // ** ternary operator */

    cout << (input >= 97 && input <= 122 ? "lowercase" : "uppercase") << endl;

    return 0;
}