#include <iostream>
using namespace std;

int decimalToBinary(int number)
{
    int ans = 0;
    int power = 1;

    while (number > 0)
    {

        int reminder = number % 2;
        number = number / 2;
        ans += (reminder * power);
        power = power * 10;
    }
    return ans;
}

int binaryToDecimal(int number)
{
    int ans = 0, pwr = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        ans += (lastDigit * pow(2, pwr));
        pwr++;
        number = number / 10;
    }
    return ans;
}

int main()
{
    cout << decimalToBinary(145) << endl;
    cout << binaryToDecimal(1001) << endl;
    return 0;
}
