#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    char grade;
    map<char, int> data;

    cout << "Enter number of Students: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Student " << i << " Grade (A - F): ";
        cin >> grade;

        data[grade] += 1;
    }

    for (auto j : data)
    {
        cout << j.first << " = " << j.second << endl;
    }

    return 0;
}