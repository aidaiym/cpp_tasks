#include <iostream>
using namespace std;

int main()
{
    int x[3][4] = {{0, 123, 23, 432}, {23, 3, 32, -34}, {4, 5, 3, -23}};
    int maxValue = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (x[0][0] < x[i][j])
            {
                x[0][0] = x[i][j];
            }
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j] << endl;
        }
    }
    cout << "Largest element = " << x[0][0] << endl;
    return 0;
}