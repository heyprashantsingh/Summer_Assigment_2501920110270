// write a program to find lcm of two number
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int maxNum = (a > b) ? a : b;

    for (int i = maxNum; ; i++) {
        if (i % a == 0 && i % b == 0) {
            cout << "LCM = " << i;
            break;
        }
    }

    return 0;
}