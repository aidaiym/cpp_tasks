// Given a side of an equilateral triangle. Find the area of the triangle, its altitude, the radii of the inscribed circle and the circumcircle.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, area, altitude, radius, circumcircle;
    cout << "Input a: ";
    cin >> a;
    area = (sqrt(3) / 4) * a * a;
    altitude = (1 / 2) * sqrt(3) * a;
    circumcircle = a / sqrt(3);
    radius = 1 / 2 * a / sqrt(3);
    cout << "Area= " << area << endl;
    cout << "Altitude= " << area << endl;
    cout << "Circumcircle= " << area << endl;
    cout << "Radius= " << area << endl;
}
