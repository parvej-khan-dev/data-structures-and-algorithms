#include <iostream>

using namespace std;

double powOfX(double x, int n)
{
    if (x == 1)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (n == 0)
        return 1.0;

    if (x == -1 && n % 2 == 0)
        return 1.0;

    if (x == -1 && n % 2 != 0)
        return -1.0;

    long int binForm = n;
    double ans = 1;

    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int bestTimeToBuyAndSellStock(vector<int> &prices)
{

    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
    };
    return maxProfit;
}

int main()
{

    double res = powOfX(3, 5); // time complexity logn

    vector<int> v1 = {7,1,5,3,6,4};

    int mp = bestTimeToBuyAndSellStock(v1);
    cout << mp << " best time to sell amd max profit" << endl;
    cout << res << " \n";
    return 0;
}