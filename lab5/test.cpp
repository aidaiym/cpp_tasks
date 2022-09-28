// #7 There is a two-dimensional array with 3 rows and 4 columns. Arrange the array in descending order of the elements of the 3rd row.
#include <iostream>
using namespace std;
int main()
{
    int arr[3][4], temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter arr: "
                 << "[" << i << "]"
                 << "[" << j << "] ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Entered 2D Array: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k + 1 < 3; k++)
            {

                if (arr[2][k] < arr[2][k + 1])
                {
                    temp = arr[2][k];
                    arr[2][k] = arr[2][k + 1];
                    arr[2][k + 1] = temp;
                }
            }
        }
    }

    cout << "Entered 2D Array: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}