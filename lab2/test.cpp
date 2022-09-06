// If the sum of 3 real numbers x,y,z <1, then replace the smallest of these numbers with the half-sum of the other two, otherwise replace the smaller of x and y with the half-sum of the remaining two values.
#include <iostream>

using namespace std;

int main()
{
    float x,y,z, sum;
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

// 4. The real numbers a, b, c are given. Find the roots of the quadratic equation ax2+bx+c=0, otherwise the answer should be the message that there are no roots.
// 5. The real numbers x, y, z are given. Find out if there is a triangle with lengths of sides x, y, z.