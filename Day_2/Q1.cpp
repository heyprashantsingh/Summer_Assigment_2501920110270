// WRITE A PROGRAM TO FIND SUM Of DIGITS OF A NUMBER
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter number: ";
    cin >> n;

    while(n > 0) {
        sum = sum + (n % 10); // last digit add
        n = n / 10;           // remove last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}