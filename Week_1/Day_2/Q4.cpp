// write a program to check whether the number is palindrome
#include <iostream>
using namespace std;
int main (){
   int n, reverse = 0 ;
  
  cout << (" enter the number : ");
  cin >> n;
  int  x = n;
     while (n>0){
     int  digit = n % 10 ;  
      reverse = reverse * 10 + digit;                                     
        n = n/10;
 }
     if ( x == reverse){
      cout << " the number is palindrome" << endl;
     } else {
      cout << " the number is not palindrome" << endl;
     }
   return 0;
}
