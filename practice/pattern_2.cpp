#include <stdio.h>
#include <iostream>
using namespace std;

void starPattern(int n){
    int i,j,k=n;
     
     // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++)
    {
                // Inner loop for columns

        for(int j =0; j<=n; j++){

            //condition for star pattern
            if(j>=k)
            cout<<"*";
            else
            cout<<" ";
        }
        k--;
        cout<<endl;
    }
    
}

int main() {
    int n;
    cin>>n;
    starPattern(n);
    
    return 0;
}