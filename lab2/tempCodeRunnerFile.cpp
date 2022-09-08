// A natural number n (n9999) is given. Is this number a palindrome (inverted) given four digits,like , e.g., the numbers 2222, 6116, 0440, etc.

#include <iostream>
using namespace std;
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int num, reverse_number;
    cout << "Enter a number: ";
    cin >> num;
    reverse_number = reverseDigits(num);
    if (reverse_number == num)
        cout << "It is a palindrome number = " << num << endl;
    else
        cout << "It is a not palindrome number = " << num << endl;
    return 0;
}
