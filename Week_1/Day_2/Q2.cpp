//WRITE A PROGRAM TO REVERSE OF A NUMBER
#include <iostream>
using namespace std;
int main(){
    int n , reverse = 0;
    int digit;
 
     cout << ("enter the number : ") ;
     cin >> n ;
     
    while ( n > 0){
        digit = n % 10 ;
        reverse = reverse * 10 + digit;
         n = n / 10;
    }
    cout << ("the reverse number is :")<< reverse << endl;
     return 0;
}