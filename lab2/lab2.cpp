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
    else if (x <= 1 & 0 < x)
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
// If the sum of 3 real numbers x,y,z <1, then replace the smallest of these numbers with the half-sum of the other two, otherwise replace the smaller of x and y with the half-sum of the remaining two values.
#include <iostream>

using namespace std;

int main()
{
    float x, y, z, sum;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    sum = x + y + z;
    small = x < y < z;
    if (sum < 1)
    {
        small = (oth1 + oth2) / 2;
    }

    else
    {
        smallXorY = (oth1 + oth2) / 2;
    }

    cout << "Small = " << f << endl;

    return 0;
}

//  The real numbers a, b, c are given. Find the roots of the quadratic equation ax2+bx+c=0, otherwise the answer should be the message that there are no roots.
#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    if (it_is_root)
    {
        a *x *x + b *x + c = 0 find x1 and x2;
    }
    else
    {
        cout << "There are no roots  " << endl;
    }

    cout << "Y = " << y << endl;
    cout << "X = " << x << endl;

    return 0;
}

// Given three real numbers. Squared those of them whose values are non-negative.

#include <iostream>

using namespace std;

int main()
{
    float x, y, z, ans;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    if (x > 0)
    {
        ans = x * x;
    }

    else if (y > 0)
    {
        ans = y * y;
    }
    else if (z > 0)
    {
        ans = z * z;
    }
    cout << "Small = " << f << endl;

    return 0;
}

// Given real numbers. Choose those that belong to the interval [1,3].

#include <iostream>

using namespace std;

int main()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 1 & number < 3)
    {
        cout << "Number = " << number << endl;
    }
    else
    {
        cout << "Number not belong to the interval [1,3]  " << endl;
    }
    return 0;
}
// The program asks the user "Сколько вам лет?". You enter a positive number up to 100. The program must give the complete answer "Вам X (or год or года or лет).
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Сколько вам лет? ";
    cin >> age;
    if (age > 0 & age < 100)
    {
        cout << "Вам " << age << " лет" << endl;
    }
    else
    {
        cout << "Ваш возраст не реален " << endl;
    }
    return 0;
}
// Given the real numbers a, b, c. Double these numbers if a≥b≥c, and replace them with absolute values if not.
#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    if (a >= b & b <= c)
    {
        a = 2 * a;
        b = 2 * b;
        c = 2 * c;
        cout << "Doubled numbers" << endl;
    }
    else
    {
        abs(a);
        abs(b);
        abs(c);
        cout << "Absolute values " << endl;
    }

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
