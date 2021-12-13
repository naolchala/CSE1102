#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Odd Even Classifier" << endl
         << "-----------------------------" << endl;

    cout << "Enter a Number: ";
    cin >> num;

    cout << endl;
    if (num % 2 == 0)
    {
        cout << num << " is Even" << endl;
    }
    else
    {
        cout << num << " is Odd" << endl;
    }
    return 0;
}