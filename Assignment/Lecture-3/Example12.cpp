#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num;
    do
    {
        cout << "Enter a number to Calculate Square root(0 to quit): ";
        cin >> num;

        if (num < 0)
        {
            cout << "the number should be positive" << endl;
            continue;
        }

        cout << "Square root of " << num << " = " << sqrt(num) << endl;
    } while (num != 0);
    return 0;
}