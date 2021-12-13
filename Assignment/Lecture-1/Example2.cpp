#include <bits/stdc++.h>
using namespace std;

int main()
{
    double income, sales;
    cout << "Income Calculator" << endl
         << "-----------------" << endl;

    cout << "Sales: ";
    cin >> sales;

    if (sales >= 50000)
    {
        income = 375 + (0.16 * sales);
    }
    else if (sales >= 40000)
    {
        income = 350 + (0.14 * sales);
    }
    else if (sales >= 30000)
    {
        income = 325 + (0.12 * sales);
    }
    else if (sales >= 20000)
    {
        income = 300 + (0.09 * sales);
    }
    else if (sales >= 10000)
    {
        income = 250 + (0.05 * sales);
    }
    else
    {
        income = 200 + (0.03 * sales);
    }
    cout << endl;
    cout << "--------------------" << endl
         << "Income = $" << income << endl;
    return 0;
}