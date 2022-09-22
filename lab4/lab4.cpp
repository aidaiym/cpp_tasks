// Laboratory work #4
// 1. Information about the amount of precipitation during the week is given as an array. Determine the total amount of precipitation for the week.

#include <iostream>
using namespace std;

int precipitation[] = {16, 2, 77, 40, 21, 0, 55};
int i, amountOfPrecipitation = 0;

int main()
{
  for (i = 0; i < 7; i++)
  {
    amountOfPrecipitation += precipitation[i];
  }
  cout << "Amount of precipitation during the week = " << amountOfPrecipitation << "mm" << endl;
  return 0;
}
//  2. The information about air temperature for a month is given as an array. Determine how many times the temperature dropped below 0 degrees.
#include <iostream>
using namespace std;

int temperatureMonth[] = {16, 2, -3, 7, 10, 21, 0, 2, -2, -1, 16, 2, -3, 7, 10, 21, 0, 2, -2, -1, -3, 2, 4, 15, -11, -4, -2, 4};
int i, amountOfTemp = 0;

int main()
{
  for (i = 0; i < 30; i++)
  {
    if (temperatureMonth[i] < 0)
    {
      amountOfTemp++;
    }
  }
  cout << "Temperature dropped below 0 degrees = " << amountOfTemp << " times" << endl;
  return 0;
}
// 3. The air temperatures for the week are given. Determine the average air temperature for the week and how many times the temperature dropped below 0 degrees.

#include <iostream>
using namespace std;

float resultairTemperatureMonth[] = {-273.15, 67.8, 240.0, 12.2, 184.4, 15.7, -128.9};
int i, average, counter, summ = 0;
int main()
{
    for (i = 0; i < 7; i++)
    {
        summ += resultairTemperatureMonth[i];
        if (resultairTemperatureMonth[i] < 0)
        {
            counter++;
        }
        average = summ / 7;
    }
    cout << "Average  = " << average << endl;
    cout << counter << " times the temperature dropped below 0 degrees" << endl;

    return 0;
}
// 4. Given natural numbers N, a0,a1,....,a(N-1). Determine the number of members of the sequence that have even ordinal numbers and are odd numbers.
#include <iostream>
using std::cout;

const int n = 10;

int main()
{
  int count = 0;
  int A[n] = {3, 6, 5, 6, -1, 4, 5, 6, 7, 3};
  for (int i = 0; i < n; i++)
  {
    if (A[i] % 2 == 1 && (i + 1) % 2 == 0)
      count++;
  }
  cout << count << '\n';
}
// 5. Determine whether the given sequence is increasing (use the break operator to avoid unnecessary checks).
#include <iostream>
using namespace std;

int main()
{

    int n;
    int a[100];
    bool isIncreasing = true;
    cout << "Input number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] >= a[i + 1])
        {
            isIncreasing = false;
            break;
        }
    }
    if (isIncreasing == false)
    {
        cout << "Sequence is not increasing." << endl;
    }
    else
    {
        cout << "Sequence is increasing." << endl;
    }

    return 0;
}
// 5. Determine whether the given sequence is increasing (use the break operator to avoid unnecessary checks).

#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100];

    cout << "Input number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    bool ans = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
        {
            ans = false;
        }
    }

    if (ans == false)
    {
        cout << "Sequence is not increasing.";
    }
    else
    {
        cout << "Sequence is increasing.";
    }

    return 0;
}


// 6. There is an array of numbers. Determine how many pairs of nonidentical adjacent elements it contains.
#include <iostream>
using namespace std;

int resultOfNonPair, pairs = 0;
int arrayNum[] = {4, 567, 8, 6, 88, 88, 88, 8};
int main()
{
  for (int i = 0; i < 7; i++)
  {
    if (arrayNum[i] != arrayNum[i + 1])
    {
      resultOfNonPair++;
    }
    else if (arrayNum[i] == arrayNum[i + 1])
    {

      pairs++;
    }
  }
  cout << "There are " << resultOfNonPair << " nonidentical adjacent elements " << endl;
  cout << "There are " << pairs << " pairs " << endl;
  return 0;
}

// 7. Given an array of numbers.Find the largest element, put it first, moving the rest elements to right.

#include <iostream>
using namespace std;

int arrayNum[] = {-54, 567, 80, 116, 84, 28, -8, 34, 0};
int main()
{
  for (int i = 1; i < 9; i++)
  {
    if (arrayNum[0] < arrayNum[i])
    {
      arrayNum[0] = arrayNum[i];
    }
  }
  cout << "Largest element = " << arrayNum[0] << endl;
  return 0;
}
