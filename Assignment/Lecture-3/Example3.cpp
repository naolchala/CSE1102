#include <iostream>
using namespace std;

int main()
{
    double angle;
    cout << "Quadrant Classifier " << endl
         << "-------------------------" << endl;

    cout << "Enter an angle to get the quadrant: ";
    cin >> angle;

    if (angle > 360)
    {
        angle = int(angle) % 360;
    }

    if (angle == 0)
    {
        cout << "Positive X Axis";
    }
    else if (angle < 90)
    {
        cout << "Quadrant I";
    }
    else if (angle == 90)
    {
        cout << "Positive Y Axis";
    }
    else if (angle < 180)
    {
        cout << "Quadrant II";
    }
    else if (angle == 180)
    {
        cout << "Negative X Axis";
    }
    else if (angle < 270)
    {
        cout << "Quadrant III";
    }
    else if (angle == 270)
    {
        cout << "Negative Y Axis";
    }
    else if (angle < 360)
    {
        cout << "Quadrant IV";
    }

    cout << endl;
    return 0;
}