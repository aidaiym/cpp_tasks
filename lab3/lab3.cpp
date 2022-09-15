// 1. Calculate the value of a function with x varying from 1 to 20 in increments of 0.5.
#include <iostream>

using namespace std;

int main()
{
    float y, x;
    for (x = 1; x < 20; x += 0.5)
    {
        y = 2 * x * x + 15;
        cout << "x= " << x << ", y= " << y << endl;
    }
    return 0;
}

// 2. Calculate the value of a function with x varying from 0 to 16 in increments of 2.
#include <iostream>

using namespace std;

int main()
{
    float y, x;
    for (x = 0; x <= 16; x += 2)
    {
        y = 0.8 * x - sin(sqrt(x)) - 0.1;
        cout << "x= " << x << ", y= " << y << endl;
    }
    return 0;
}

// 3. Calculate the value of the function a=0.3, n=10, i varies from 1 to 10 in steps 1.
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

// 4. Calculate the value of the function a=2.6, b=5, x varies from 0 to 10 in steps of 0.5.
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
// #5
// a) A natural n is given. Find function:
#include <iostream>

using namespace std;

int main()
{
    float number, result;
    cout << "Enter natural number: ";
    cin >> number;
    result = 1;

    for (int x = 1; x <= number; x++)
    {
        result *= 1 + (1. / (x * x));
    }
    cout << "The answer is =  " << result << endl;
    return 0;
}

// b) A natural n is given. Find function:
#include <iostream>

using namespace std;

int main()
{
    double number, result, sum_sin;
    cout << "Enter natural number: ";
    cin >> number;
    result = 1;
    sum_sin = 1.0;
    for (int x = 1; x <= number; x++)
    {
        sum_sin += sin(x);
        result += 1. / sum_sin;
    }
    cout << "The answer is =  " << result << endl;
    return 0;
}
// c) A natural n is given. Find function:
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double root = 1.0;
    int n;
    cout << "Enter a natural number:";
    cin >> n;
    root = sqrt(2);
    for (double x = 1; x <= n; x++)
    {
        root += sqrt(root);
    }
    cout << "result " << root << endl;
}

// d) A natural n is given. Find function:
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double result = 1.0;
    double sin_sum = 0.0;
    double cos_sum = 0.0;
    int n;
    cout << "Enter a natural number:";
    cin >> n;
    for (double x = 1; x <= n; x++)
    {
        cos_sum += cos(x);
        sin_sum += sin(x);
        result *= cos_sum / sin_sum;
    }
    cout << "result " << result << endl;
}
// 1. Find the sum and product of a sequence of 10 integers from 1 to 10.
#include <iostream>

using namespace std;

int main()
{
    float number, result, counter;
    counter = 1;
    do
    {
        result += 1. / (counter * counter);
        counter++;
    } while (counter <= 10);
    cout << "The sum and product of a sequence  is " << result << endl;
    return 0;
}
// 2.  A natural n is given. Calculate: a
#include <iostream>

using namespace std;

int main()
{
    float n, result, counter;
    cout << "Enter a natural number:";
    cin >> n;
    counter = 1;
    while (counter <= n)
    {
        result *= 1 + (1 / (counter * counter));
        counter++;
    }
    cout << "result " << result << endl;
}
// 3.  A real number a is given. Find among the numbers
#include <iostream>

using namespace std;

int main()
{
    float a, result, counter;
    cout << "Enter a natural number:";
    cin >> a;
    counter = 1;
    do
    {
        result += 1 + (1. / counter);
        counter++;
    } while (counter <= a);
    cout << "Answer =  " << result << endl;
    return 0;
}

// 4. A real number a is given. Find among the numbers
#include <iostream>

using namespace std;

int main()
{
    float number, result, n, x;
    cout << "Enter positive integer:";
    cin >> number;
    for (n = 1; n <= number; n++)
    {
        result += pow(sin(x), n);
    }
    cout << "The result is " << result << endl;
}

// A natural n is given. Find where х1=у1=1; xi=0.3xi-1; yi=xi-1+yi-1, i=2,3,... Use do...while operator.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter a natural number:";
    cin >> n;
    double x1 = 1, y1 = 1, summa = 1.0;
    do
    {
        double x2 = 0.3 * x1;
        double y2 = x1 + y1;
        summa += x2 / (1 + fabs(y2));
        x1 = x2;
        y1 = y2;
        i++;
    } while (i <= n);
    cout << "result " << summa << endl;
}
