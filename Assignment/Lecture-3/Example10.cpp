#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    double score;
    char grade;

    map<char, int> data;
    cout << "Enter total number of students: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << "Enter Student " << i << " Mark (0 - 100): ";
        cin >> score;

        if (score < 0 || score > 100)
        {
            cout << "Invalid Value " << endl;
            continue;
        }

        if (score > 85)
            grade = 'A';
        else if (score > 70)
            grade = 'B';
        else if (score > 55)
            grade = 'C';
        else if (score > 40)
            grade = 'D';
        else
            grade = 'F';

        data[grade] += 1;
        i++;
    }

    for (auto j : data)
    {
        cout << j.first << " = " << j.second << endl;
    }
    return 0;
}