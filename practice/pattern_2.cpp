#include <stdio.h>
#include <iostream>
using namespace std;

// void starPattern(int n){
//     int i,j,k=n;
     
//      // Outer loop to handle number of rows
//     // n in this case
//     for (int i = 0; i < n; i++)
//     {
//                 // Inner loop for columns

//         for(int j =0; j<=n; j++){

//             //condition for star pattern
//             if(j>=k)
//             cout<<"*";
//             else
//             cout<<" ";
//         }
//         k--;
//         cout<<endl;
//     }
    
// }
// Inverted Pyramid Pattern in C++
// void invertPattern(int n){
//     for(int i =n; i>0; i--){
      
//         for(int j =0; j<i; j++){

//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Diamond Shaped Pattern in C++
// void diamondPattern(int n){
//     //Upper Half
//     for(int i =1; i<=n; i++){
//         for(int j =1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k =1; k<= 2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     // DownWard
// for(int i =1; i<=n-1; i++){
//     for(int j =1; j<=i; j++){
//         cout<<" ";
//     }
//     for(int g =1; g<=2*(n-i)-1; g++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }
//invert
void invretPt(int n){
    for(int i =n; i>0; i--){
        for(int j =0; j<i; j++){
            cout<<"#";

        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    //starPattern(n);
    //invertPattern(n);
    //diamondPattern(n);
    invretPt(n);
    
    return 0;
}