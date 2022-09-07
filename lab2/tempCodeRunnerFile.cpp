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
