// Lab 5
// # 1
//  A two-dimensional array with 3 rows and 4 columns is given. Find the largest element, the number of row and column in which it is located.

#include <iostream>
using namespace std;
int main()
{
    int m, n, largest, smallest;
    int largrowloc, largcolumnloc, smallrowloc, smallcolumnloc;

    // take number of rows and columns
    cout << "Enter number of row and column: ";
    cin >> m;
    cin >> n;

    // declare array by given number of rows and columns
    int arr[m][n], i, j;

    // take array elements as input
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter arr: "
                 << "[" << i << "]"
                 << "[" << j << "] ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // display array (optional)

    cout << "Entered 2D Array: " << endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // assume first element is
    // largest and smallest
    largest = arr[0][0];
    smallest = arr[0][0];

    // compare with all elements
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (largest < arr[i][j])
            {
                largest = arr[i][j];
                largrowloc = i;    // row location of largest element
                largcolumnloc = j; // column location of largest element
            }

            if (smallest > arr[i][j])
            {
                smallest = arr[i][j];
                smallrowloc = i;    // row location of smallest element
                smallcolumnloc = j; // column location of smallest element
            }
        }
    }
    // display results
    cout << endl;
    cout << "Largest element in array is " << largest << "in location arr[" << largrowloc << "][" << largcolumnloc << "]" << endl;
    cout << "Smallest element in array is " << smallest << "in location arr[" << smallrowloc << "][" << smallcolumnloc << "]" << endl;
    return 0;
}
// #2  Make a program to calculate the arithmetic mean of the positive elements of each column of a two-dimensional array containing 6 columns and three rows. Assuming that each column has at least one positive element.

#include <iostream>
using namespace std;
int main()
{
    int arr[3][6], i, j, counter = 0;
    float arithmetic_mean, summ, summ1, summ2, summ3, summ4, summ5;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << "Enter arr: "
                 << "[" << i << "]"
                 << "[" << j << "] ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "Entered 2D Array: " << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < 3; i++)
    {

        if (arr[i][0] > 0)
        {
            summ += arr[i][0];
            counter++;
            cout << "Arithmetic mean column 1 = " << summ / counter << endl;
        }
        if (arr[i][1] > 0)
        {
            summ += arr[i][1];
            counter++;
            cout << "Arithmetic mean column 2  =  " << summ / counter << endl;
        }
        if (arr[i][2] > 0)
        {
            summ += arr[i][2];
            counter++;
            cout << "Arithmetic mean column 3  = " << summ / counter << endl;
        }
        if (arr[i][3] > 0)
        {
            summ += arr[i][3];
            counter++;
            cout << "Arithmetic mean column 4  = " << summ / counter << endl;
        }
        if (arr[i][4] > 0)
        {
            summ += arr[i][4];
            counter++;
            cout << "Arithmetic mean column 5  = " << summ / counter << endl;
        }
        if (arr[i][5] > 0)
        {
            summ += arr[i][5];
            counter++;
            cout << "Arithmetic mean column 6  =  " << summ / counter << endl;
        }
    }
    return 0;
}
