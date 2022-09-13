// A natural n is given. Find function
#include <iostream>

using namespace std;

int main()
{
    float number, result, counter;
    cout << "Enter natural number: ";
    cin >> number;
    counter = 1;
    do
    {
        result += 3;
        counter++;
    } while (counter <= number);
    cout << "The sum and product of a sequence  is " << result << endl;
    return 0;
}