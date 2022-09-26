/*

Array

It is a group of variables of similar data types referred to by a single element.
Its elements are stored in a contiguous memory location.
The size of the array should be mentioned while declaring it.
Array elements are always counted from zero (0) onward.
Array elements can be accessed using the position of the element in the array.
The array can have one or more dimensions.
*/


// random
#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int n;
    int a[100];
    for(int i = 0; i < 10; i ++) {
        // range [20; 100]
        cout << (rand() % (100 - 20 + 1)) + 20  << " ";
    }
    return 0;
}