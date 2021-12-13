/* 
* Write a program that determines the sum of numbers supplied by user. 
* The numbers are known to lie within -9999 and 9999. An entry out of this range is considered as an end of entry(sentinel value). 
* Use break.
*/

#include <iostream>
using namespace std;

int main()
{
    double sum, num;

    while (true)
    {
        cout << "Enter Number: ";
        cin >> num;

        if (num < -9999 || num > 9999)
        {
            break;
        }

        sum += num;
        cout << "Current sum = " << sum << endl;
    }

    cout << endl
         << endl
         << "Sum = " << sum << endl;
    return 0;
}