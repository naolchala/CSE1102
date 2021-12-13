#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double mark, total = 0, average;

    cout << "Grade Average Calculator" << endl
         << "------------------------" << endl;

    cout << "Enter number of Students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Mark for Student " << i + 1 << ": ";
        cin >> mark;

        total += mark;
    }

    average = total / n;

    cout << endl;
    cout << "------------------------------------------" << endl
         << "The Average Mark of " << n << " Students = " << average << endl;

    return 0;
}