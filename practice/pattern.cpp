#include <iostream>
using namespace std;

int main() {
    int n;
   
    cin>>n;
    // for(int i =0; i<n; i++){  //outer loop
    //     for(int j =0; j<n; j++){ //inner loop
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
       for (int  j = 0; j < n; j++)  //line start
       {
        cout<<ch;
        ch = ch +1;  // char + int
       }
       cout<<endl;
       
    }
    
    
    return 0;
}
