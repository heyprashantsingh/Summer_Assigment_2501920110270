#include <iostream>
using namespace std;

int main() {
    int n, original, digit, sum = 0;
     
    cout << ("enter the number: ");
    cin >> n;
    original = n;

    while(n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(original == sum)
        cout << ("amstrong number") << endl;
    else
        cout << ("Not Armstrong Number") << endl;
    return 0;
}