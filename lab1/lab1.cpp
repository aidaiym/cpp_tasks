//  The two legends of a right triangle are known. Find the hypotenuse and the area of the triangle.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, area;
    cout << "Input legend a: ";
    cin >> a;

    cout << "Input legend b: ";
    cin >> b;
    c = sqrt(a * a + b * b);
    area = a * b / 2;
    cout << "Hypotenuse of the right triangle= " << c << endl;
    cout << "Area of the right triangle= " << area << endl;
}

// Write a program that reads the radius of a circle and prints the diameter of the circle, the length of the circle, and the area. Use the value of constant
// 3.14 for the number pi. Perform these calculations in the output statement.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r, d, length, area;
    const float pi = 3.14;
    cout << "Input radius of the circle: ";
    cin >> r;
    d = 2 * r;
    length = 2 * pi * r;
    area = pi * r * r;
    cout << "Diameter of the circle = " << d << endl;
    cout << "Length of the circle = " << length << endl;
    cout << "Area of the circle = " << area << endl;
}

// Find the area of a ring, the inner radius of which equals 20, and the outer radius of which equals the given number r (r>20).

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float R, area;
    const float pi = 3.14;
    float r = 20;
    cout << "Input outer radius(outer radius should be r>20): ";
    cin >> R;
    area = pi * (R + r) * (R - r);
    cout << "Area = " << area << endl;
}

// Given x, y, z. Calculate a, b.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y, z, a, b;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    cout << "Input z: ";
    cin >> z;
    a = ((sqrt(fabs(x - 1))) - (pow((fabs(y)), 1 / 3.))) / (1 + (x * x / 2) + (y * y / 4));

    b = x * (atan(z) + exp(-(x + 3)));
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// Find the area of an equilateral trapezoid with b and a and an angle at the larger base a.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, height, area, angelA;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input height of equilateral trapezoid: ";
    cin >> height;
    area = 1 / 2. * (a + b) * height;
    angelA = fabs(1 / 2. * (b - a));
    cout << "Area= " << area << endl;
    cout << "Angel= " << angelA << endl;
}

// The lengths of three sides of a triangle are known. Calculate its area.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, s, area;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    s = 1 / 2. * (a + b + c);
    area = sqrt(s * (s - a)*(s - b) * (s - c));
    cout << "Area= " << area << endl;
}

// Given two integers. Find the arithmetic mean of these numbers and the geometric mean of their moduli.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, arithmeticMean, geometricMean;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    arithmeticMean = (a + b)/2;
    geometricMean = sqrt(a * b);
    cout << "Arithmetic mean= " << arithmeticMean << endl;
    cout << "Geometric mean= " << geometricMean << endl;
}

// Calculate the distance between two points X1,Y1 and X2,Y2.
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
   double x1, x2, y1, y2, distance;
   cout << "Input x1: ";
   cin >> x1;
   cout << "Input x2: ";
   cin >> x2;
   cout << "Input y1: ";
   cin >> y1;
   cout << "Input y2: ";
   cin >> y2;
   distance = sqrt((x2 - x1) * (x2 - x1)) - ((y2 - y1) * (y2 - y1));
 
   cout << "Distance= " << distance << endl;
}

//  A four-digit integer X is given. Determine the digits of the number.
#include <iostream>
using namespace std;
void atDemo(string str)
{
    cout << "thousands=" << str.at(0) << endl;
    cout << "hundreds=" << str.at(1) << endl;
    cout << "tens=" << str.at(2) << endl;
    cout << "ones=" << str.at(3) << endl;
}

int main()
{
    string str;
    cout << "Input four-digit integer X: ";
    cin >> str;
    atDemo(str);
    return 0;
}

// An edge length of a cube is given. Find the face area, total surface area and volume of the cube.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, totalSurfaceArea, volume, faceArea;
    cout << "Input a: ";
    cin >> a;
    faceArea = 4 * a * a;
    totalSurfaceArea = 6 * a * a;
    volume = a * a * a;
    cout << "Total Surface Area= " << totalSurfaceArea << endl;
    cout << "Volume= " << volume << endl;
    cout << "Face Area= " << faceArea << endl;
}
