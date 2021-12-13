#include <bits/stdc++.h>
using namespace std;

int main()
{
    double bonus, net_salary, gross_salary;
    int years;

    cout << "Bonus Calculator" << endl
         << "----------------" << endl;

    cout << "Enter Your Salary: ";
    cin >> gross_salary;
    cout << "Enter Year Worked: ";
    cin >> years;

    bonus = 0.12 * gross_salary;
    if (years > 13)
    {
        bonus += 350.00;
    }

    net_salary = bonus + gross_salary;

    cout << endl;
    cout << "----------------------" << endl
         << "Bonus = $" << bonus << endl
         << "Net Salary = $" << net_salary << endl;
    return 0;
}