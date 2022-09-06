// The real numbers x and y (x!=y) are given . Replace the lesser of these numbers by the half-sum
// of the numbers, and the greater by the doubled product.

#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    if (x < y)
    {
        x = (x + y) / 2;
        y = 2 * y;
    }
    else if (x > y)
    {
        x = 2 * x;
        y = (x + y) / 2;
    }
    else
    {
        cout << "X and Y are equal  " << endl;
    }

    cout << "Y = " << y << endl;
    cout << "X = " << x << endl;

    return 0;
}

// A real number a is given. Calculate f(a)

#include <iostream>

using namespace std;

int main()
{
    float x, f;
    cout << "Enter x: ";
    cin >> x;

    if (x <= 0)
    {
        f = 0;
    }
    else if ( x <= 1 & 0 < x)
    {
        f = (x * x) - x;
    }
    else
    {
        f = (x * x) - sin(M_PI * x * x);
    }

    cout << "f(x) = " << f << endl;

    return 0;
}