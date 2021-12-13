#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x1, x2, root;
    cout << "Quadratic Equation solver" << endl
         << "--------------------------" << endl;

    cout << "Enter quadratic equation cofficeints (a, b, c): ";
    cin >> a >> b >> c;
    root = (b * b) - (4 * a * c);

    if (root < 0)
        cout << "This Equation has << No Solution >>" << endl;
    else
    {
        root = sqrt(root);
        x1 = ((-1) * b + root) / (2 * a);
        x2 = ((-1) * b - root) / (2 * a);

        cout << "The Solutions to  << " << a << "x^2 + " << b << "x + " << c << " = 0 >> are " << endl
             << "x1 = " << x1 << endl
             << "x2 = " << x2 << endl;
    }
    return 0;
}