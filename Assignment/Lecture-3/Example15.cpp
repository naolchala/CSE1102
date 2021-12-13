#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return int(double(a) * b / gcd(a, b));
}

int main()
{
    int a, b;

    do
    {
        cout << "Enter two numbers to find their LCM and GCD: ";
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
        }

        if (a > 0 && b > 0)
        {
            cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
            cout << "LCM(" << a << ", " << b << ") = " << lcm(a, b) << endl;
        }
        else
        {
            cout << "the numbers should be positive " << endl;
            continue;
        }

    } while (true);

    return 0;
}