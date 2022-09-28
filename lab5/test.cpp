// #7 There is a two-dimensional array with 3 rows and 4 columns. Arrange the array in descending order of the elements of the 3rd row.
#include <iostream>
using namespace std;
int main()

{
    int arr[5][2], i, j, x;
    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "Enter arr: "
                 << "[" << i << "]"
                 << "[" << j << "] ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Entered 2D Array: " << endl;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (j = 0; j < 6; j++)
        for (i = 0; i < 2; i++)
            if (arr[1][j] > arr[1][i])
            {
                for (int k = 0; k < 3; k++)
                {
                    x = arr[k][i];
                    arr[k][i] = arr[k][j];
                    arr[k][j] = x;
                }
            }
    cout << "Array in descending order of the elements of the 3rd row: " << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}3