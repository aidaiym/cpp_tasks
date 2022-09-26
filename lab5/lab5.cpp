// Lab 5
// # 1
//  A two-dimensional array with 3 rows and 4 columns is given. Find the largest element, the number of row and column in which it is located.

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

// # 2
// Make a program to calculate the arithmetic mean of the positive elements of each column of a two-dimensional array containing 6 columns and three rows. Assuming that each column has at least one positive element.