// A natural number n (n9999) is given. Is this number a palindrome (inverted) given four digits, like , e.g., the numbers 2222, 6116, 0440, etc.
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
