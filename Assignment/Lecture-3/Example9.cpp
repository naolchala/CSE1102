#include <iostream>
#include <map>
using namespace std;

int main()
{
    char grade;
    map<char, int> data;

    int i = 1;
    do
    {
        cout << "Enter Student " << i << " Grade (A - F, 0 to Quit): ";
        cin >> grade;
        if (grade != '0')
        {
            // converting to uppercase
            if (grade >= 'a' && grade <= 'z')
                grade -= 32;

            data[grade] += 1;
            i++;
        }

    } while (grade != '0');

    for (auto j : data)
    {
        cout << j.first << " = " << j.second << endl;
    }

    return 0;
}