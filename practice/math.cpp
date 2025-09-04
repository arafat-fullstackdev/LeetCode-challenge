#include <stdio.h>
#include <iostream>
#include <cmath>

 using namespace std;

int main() {
   double Square;
   cin>>Square;

   double Root;
    cin>>Root;

   double Log;
    cin>>Log;

   double Value;
   double Value1;
   double Value2;

   
  
  

      Value = sqrt(Square);
      Value1 = round(Root);
      Value2 = log(Log);

    cout<<"The Value is: "<<Value<<endl;
    cout<<"The Value is: "<<Value1<<endl;
    cout<<"The Value is: "<<Value2<<endl;

    return 0;
}