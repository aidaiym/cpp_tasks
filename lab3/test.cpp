// Find sum and  product of a sequence of 10 integers from 1 to 10.
#include <iostream>

using namespace std;

int main()
{
    int number, sum;
    number = 1;
    do
    {
        sum += number;
        number++;
    cout << "Number " << number << " sum " << sum << endl;

    } while (number < 10);
    cout << "Number " << number << " sum " << sum << endl;
    return 0;
}