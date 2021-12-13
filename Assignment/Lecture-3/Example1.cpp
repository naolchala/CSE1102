#include <iostream>
using namespace std;

int main()
{
    int num, num_abs;
    cout << "Absoulute value Calculator" << endl
         << "---------------------" << endl;

    cout << "Enter a number: ";
    cin >> num;

    num_abs = num;
    if (num < 0)
    {
        num_abs *= -1;
    }
    cout << endl;
    cout << "|" << num << "| = " << num_abs << endl;

    return 0;
}