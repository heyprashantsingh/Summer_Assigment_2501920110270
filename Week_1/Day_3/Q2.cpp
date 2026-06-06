//Write a program to Print prime numbers in a range
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << ("enter the range: ") ;
    cin >> a >> b;

    for (int n = a; n <= b; n++) {

        int factors = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                factors++;
            }
        }

        if (factors == 2) {
            cout << n << " ";
        }
    }

    return 0;
}
void NewFunction(int a, int b)
{
    cout << (" enter the range :") << a << b;
}
