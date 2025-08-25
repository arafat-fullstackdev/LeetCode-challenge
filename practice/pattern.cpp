#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    //** */ Square pattern
    // for(int i =0; i<n; i++){  //outer loop
    //     for(int j =0; j<n; j++){ //inner loop
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //    for (int  j = 0; j < n; j++)  //line start
    //    {
    //     cout<<ch<<" ";
    //     ch = ch +1;  // char + int
    //    }
    //    cout<<endl;

    // }

    // int num =1;
    //  for(int i =0; i<n; i++){
    //      for(int k =0; k<n; k++){
    //       cout<<num<<" ";
    //       num++;
    //      }
    //      cout<<endl;
    //  }
    //  char chart = 'A';
    //  for(int i =0; i<n; i++){
    //      for(int j =0; j<n; j++){

    //         cout <<chart<<" ";
    //         chart ++;
    //     }
    //     cout<<endl;
    // }
    //? Triangle pattern
    // for(int i =0; i<=n; i++){
    //     for(int j =0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // print number
    // for(int i =0; i<=n; i++){
    //     for(int j =0; j<i+1; j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // print char

    // for(int i =0; i<=n; i++){
    //     char chr= 'A' +i;
    //    for(char j =0; j<=i; j++){
    //     cout<<chr<<" ";

    //    }
    //    cout<<endl;
    // }

    //* print Pyramid
    for (int i = 0; i < n; i++)
    {
        // white space
        for (int j = 0; j <  n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <=i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;

    // int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) { // Outer loop for rows
        for (int j = 1; j <= i; ++j) { // Inner loop for columns (stars)
            std::cout << "* ";
        }
        std::cout << "\n"; // Newline after each row
    }

    return 0;
}
