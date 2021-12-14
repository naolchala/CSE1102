#include <iostream>
using namespace std;

int main()
{
    double sum = 0, num;
start:
    cout << "Enter Number: ";
    cin >> num;
    if (num > 9999 || num < -9999)
    {
        cout << endl
             << "Sum = " << sum << endl;
    }
    else
    {
        sum += num;
        cout << "Current Sum = " << sum << endl;
        goto start;
    }
    return 0;
}