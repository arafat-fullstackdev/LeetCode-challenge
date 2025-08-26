#include <stdio.h>
#include <iostream>
using namespace std;

int revNumDigits(int n){
      int revNum =0;

      while (n> 0)
      {
       revNum = revNum * 10 + n%10;
       n = n/10;
      }
      
return revNum;
}

int main() {
    int n;
   cin>>n;
   cout<<revNumDigits(n);
   return 0;

    
    return 0;
}