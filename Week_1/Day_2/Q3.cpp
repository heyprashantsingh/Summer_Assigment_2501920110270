//WRITE A PROGRAM TO FIND PRODUCT OF DIGIT
#include <iostream>
using namespace std;
int main (){
    int n , digit;
    int product = 1 ;
       
    cout << ("enter the number : ") ;
    cin >> n ;
      
       while (n >0){

        digit = n % 10 ;
      product = product * 1 * digit ;
        n = n / 10 ;
     } 

      cout << ("prouct of digit is : ") << product << endl;
      return 0;
}
