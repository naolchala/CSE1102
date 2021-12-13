/**
 * An experiment data contains range of positive n values. 
 * The experimenter is interested in those values that lies between 100 and 500. 
 * He/she wants the average of the numbers in this range. 
 * Write a program that calculates this sum.  
 * Use continue.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    double val, total = 0, average;
    cout << "Enter the data cout: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Value " << i + 1 << ": ";
        cin >> val;

        if (val > 500 || val < 100)
        {
            continue;
        }

        total += val;
    }

    average = total / n;

    cout << endl;
    cout << "Sum = " << total << endl;
    cout << "Average = " << average << endl;

    return 0;
}