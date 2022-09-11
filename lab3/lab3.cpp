// Calculate the value of a function with x varying from 1 to 20 in increments of 0.5.
#include <iostream>

using namespace std;

int main()
{
    float y, x;
    for (x = 1; x < 20; x+=0.5)
    {
        y = 2 * x * x + 15;
        cout << "x= " << x << ", y= " << y << endl;
    }
    return 0;
}

// Calculate the value of a function with x varying from 0 to 16 in increments of 2.
#include <iostream>

using namespace std;

int main()
{
    float y, x;
    for (x = 0; x <= 16; x+=2)
    {
        y = 0.8*x - sin(sqrt(x)) - 0.1;
        cout << "x= " << x << ", y= " << y << endl;
    }
    return 0;
}

// Calculate the value of the function a=0.3, n=10, i varies from 1 to 10 in steps 1.
#include <iostream>

using namespace std;

int main()
{
    float a = 0.3, n = 10, i, t;
    for (i = 1; i < 10; i++)
    {
        if (sin((i * i) / n) > 0)
        {
            t = a * sin((i * i) / n);
            cout << "i=" << i << " sin()>0, t= " << t << endl;
        }
        else if (sin((i * i) / n) <= 0)
        {
            t = cos(i + 1 / n);
            cout << "i=" << i << " sin()<=0, t= " << t << endl;
        }
    }
    return 0;
}

// Calculate the value of the function a=2.6, b=5, x varies from 0 to 10 in steps of 0.5.
#include <iostream>

using namespace std;

int main()
{
    float a = 2.6, b = 5, x, s;
    for (x = 0; x < 10; x += 0.5)
    {
        if (x < 2)
        {
            s = a + (b / exp(x) + cos(x));
            cout << "x=" << x << " x<2, t= " << s << endl;
        }
        else if (x >= 6)
        {
            s = (a + b) / (x + 1);

            cout << "x=" << x << " x >= 6, t= " << s << endl;
        }
        else if (2 <= x & x < 6)
        {
            s = exp(x) + sin(x);
            cout << "x=" << x << " 2<=x<6, t= " << s << endl;
        }
    }
    return 0;
}

// A natural n is given. Calculate funstions
#include <iostream>

using namespace std;

int main()
{
    float n, a, b, c, d;
    cout << "Enter natural n: ";
    cin >> n;
    for (n = 1; n < 20; n++)
    {
        a = 1 + (1 / n * n);
        b = 1 / (sin(n));
        c = sqrt(2 + n);
        d = cos(n) / sin(n);
        cout << "x= " << n << ", y= " << a << endl;
    }
    return 0;
}