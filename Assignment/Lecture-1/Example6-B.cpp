#include <bits/stdc++.h>
using namespace std;

int main()
{
    int random_number, lives = 5, guess;

    cout << "GuessTheInt Game" << endl
         << "-----------------" << endl;
    srand(time(nullptr));
    random_number = int(double(rand()) / RAND_MAX * 20);
    while (lives > 0)
    {
        cout << "Guess A Number between 0 and 20: ";
        cin >> guess;

        if (guess == random_number)
        {
            cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl
                 << "<<<<<<< Success :) >>>>>>>>" << endl
                 << ">>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
            break;
        }
        else
        {
            lives--;
            if (lives > 0)
                cout << "Try Again (" << lives << " Lives Left)" << endl;
        }
    }

    if (lives == 0)
    {
        cout << endl
             << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl
             << ">>>>>>>>>> Failure :( >>>>>>>>>>" << endl
             << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    }

    return 0;
}