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
    float x, y, z, sum, smallest;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    sum = x + y + z;
    if (sum < 1)
    {
        if (x < z & x < y)
        {
            smallest = x;
            smallest = (z + y) / 2;
            cout << "Smallest number is x. X= " << smallest << endl;
        }
        else if (y < z & y < x)
        {
            smallest = y;
            smallest = (z + x) / 2;
            cout << "Smallest number is y.  Y= " << smallest << endl;
        }
        else
        {
            smallest = z;
            smallest = (x + y) / 2;
            cout << "Smallest number is z. Z= " << smallest << endl;
        }
    }
    else
    {
        if (x < y)
        {
            x = (z + y) / 2;
            cout << "x<y;  x = " << x << endl;
        }
        else if (y < x)
        {
            y = (z + x) / 2;
            cout << "y<x; y = " << y << endl;
        }
    }

    return 0;
}

//  The real numbers a, b, c are given. Find the roots of the quadratic equation ax2+bx+c=0, otherwise the answer should be the message that there are no roots.
#include <iostream>

using namespace std;

int main()
{
    float a, b, c, discriminant, x1, x2, x;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    discriminant = sqrt((b * b) - (4 * a * c));
    if (discriminant > 0)
    {
        x1 = (-b + discriminant) / (2 * a);
        x2 = (-b - discriminant) / (2 * a);
        cout << "Roots of the quadratic equation x1 = " << x1 << " x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        x = -b / 2 * a;
        cout << "Dicriminant = 0. Root of the quadratic equation = " << x << endl;
    }
    else
    {
        cout << "There are no roots " << endl;
    }
    return 0;
}
// The real numbers x, y, z are given. Find out if there is a triangle with lengths of sides x, y, z.
#include <iostream>

using namespace std;

int main()
{
    float x, y, z;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    if ((x + y) > z & (x + z) > y & (z + y) > x)
    {
        cout << "Yes! It's a triangle "  << endl;
    }
    else
    {
        cout << "No, it's  not a triangle "  << endl;
    }

    return 0;
}
// Given three real numbers. Squared those of them whose values are non-negative.
#include <iostream>

using namespace std;

int main()
{
    float x, y, z;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    if (x > 0 || y > 0 || z > 0)
    {
        if (y > 0 & z > 0 & x > 0)
        {
            y = y * y;
            x = x * x;
            z = z * z;
            cout << "All numbers are  non-negative  y= " << y << " x= " << x << " z= " << z << endl;
        }
        else if (x > 0 & y > 0 & z < 0)
        {
            x = x * x;
            y = y * y;
            cout << "X is  non-negative " << x << endl;
            cout << "Y is  non-negative " << y << endl;
        }
        else if (x > 0 & y<0 & z> 0)
        {
            x = x * x;
            z = z * z;
            cout << "X is  non-negative " << x << endl;
            cout << "Z is  non-negative " << z << endl;
        }
        else if (z < 0 & y<0 & x> 0)
        {
            x = x * x;
            cout << "X is  non-negative " << x << endl;
        }
        else if (z<0 & y> 0 & x < 0)
        {
            y = y * y;
            cout << "Y is  non-negative " << y << endl;
        }
        else if (y > 0 & z > 0 & x < 0)
        {
            y = y * y;
            z = z * z;
            cout << "Y is  non-negative " << y << endl;
            cout << "Y is  non-negative " << z << endl;
        }
        else if (z > 0 & y > 0 & x < 0)
        {
            z = z * z;
            y = y * y;
            cout << "Y is  non-negative " << y << endl;
            cout << "Z is  non-negative " << z << endl;
        }
        else if (z > 0 & y < 0 & x < 0)
        {
            z = z * z;
            cout << "Z is  non-negative " << z << endl;
        }
    }
    else if (x == 0 || y == 0 || z == 0)
    {
        cout << " Some number is zero. Zero is neither positive nor negative. " << endl;
    }
    else
    {
        cout << " All values are negative " << endl;
    }
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


// A natural number n (n9999) is given. Is this number a palindrome (inverted) given four digits,like , e.g., the numbers 2222, 6116, 0440, etc.

#include <iostream>
using namespace std;
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int num, reverse_number;
    cout << "Enter a number: ";
    cin >> num;
    reverse_number = reverseDigits(num);
    if (reverse_number == num)
        cout << "It is a palindrome number = " << num << endl;
    else
        cout << "It is a not palindrome number = " << num << endl;
    return 0;
}
