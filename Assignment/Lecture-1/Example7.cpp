#include <iostream>
using namespace std;

int main()
{
    double root = 1, number;
    int i = 0;
    cout << "Square root Calculator" << endl
         << "------------------------" << endl;

    cout << "Enter number: ";
    cin >> number;

    while (i <= number + 1)
    {
        i++;
        root = ((number / root) + root) / 2;
    }

    cout << endl;
    cout
        << "Square Root of " << number << " = " << root << endl;

    return 0;
}