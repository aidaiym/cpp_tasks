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