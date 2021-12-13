#include <bits/stdc++.h>
using namespace std;

int main()
{
     double width, height, area, perimeter;
     cout << "Rectangle Calculator" << endl
          << "---------------------" << endl;

     cout << "Width: ";
     cin >> width;
     cout << "Height: ";
     cin >> height;

     area = width * height;
     perimeter = 2 * (width + height);

     cout << endl;
     cout << "----------------------" << endl
          << "Area = " << area << endl
          << "Perimeter = " << perimeter << endl;
     return 0;
}