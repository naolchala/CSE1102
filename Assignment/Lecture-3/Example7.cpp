#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    double mark, average, total = 0;

    cout << "Grade Average Calculator" << endl
         << "------------------------" << endl;

    do
    {
        cout << "Enter Mark for Student " << n + 1 << ": ";
        cin >> mark;
        if (mark >= 0 && mark <= 100)
        {
            n++;
            total += mark;
        }
    } while (mark >= 0);

    average = total / n;

    cout << endl;
    cout << "------------------------------------------" << endl
         << "The Average Mark of " << n << " Students = " << average << endl;
    return 0;
    return 0;
}