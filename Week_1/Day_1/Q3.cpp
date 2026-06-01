// Write a program to Find factorial of a number
#include <iostream>
using namespace std;
int main (){
int i = 1 , n ;
int fact = 1 ;
cout << ("enter the number : ");
cin >>  n; 
for ( i= 1 ; i <= n ; i++ ) {
    fact *= i  ; 
}  
 cout << n << " ! = " << fact << endl;
 return 0;
}
