#include <iostream>
using namespace std;

int main()
{

    int n;
    double mark, total = 0, average;

    cout << "Grade Average Calculator" << endl
         << "------------------------" << endl;

    cout << "Enter number of Students: ";
    cin >> n;

    int i = 0;
    while (i < n)
    {
        cout << "Enter Mark for Student " << i + 1 << ": ";
        cin >> mark;

        if (mark >= 0 && mark <= 100)
        {

            total += mark;
            i++;
        }
        else
        {
            cout << "Mark should be between 0 - 100" << endl;
        }
    }

    average = total / n;

    cout << endl;
    cout << "------------------------------------------" << endl
         << "The Average Mark of " << n << " Students = " << average << endl;

    return 0;
}