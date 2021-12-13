#include <iostream>
using namespace std;

int main()
{
    char type;
    int hour, fee;
    cout << "Parking Charge Calculator" << endl
         << "----------------------" << endl;

    cout << "Enter vehicle Type(bBcCtT): ";
    cin >> type;
    cout << "Enter the hour: ";
    cin >> hour;

    switch (type)
    {
    case 'b':
    case 'B':
    {
        fee = 3 * hour;
        cout << "The charge for bus is " << fee;
        break;
    }
    case 'c':
    case 'C':
    {
        fee = 2 * hour;
        cout << "The charge for Car is " << fee;
        break;
    }

    case 't':
    case 'T':
    {
        fee = 5 * hour;
        cout << "The charge for Car is " << fee;
        break;
    }
    default:
        cout << "Invalid Type of Vehicle";
        break;
    }
    cout << endl;
    return 0;
}