#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

void my_swap(){
    int m,n;
}
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int mn = min({a,b,c,d});
    int mx = max({a,b,c,d});

    cout<<mn<<" "<<mx<<endl;
    
    return 0;
}

//
#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int>& v) {
    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;
}
int main() {

    // Creating a vector of 5 elements from
    // initializer list
    vector<int> v1 = {1, 4, 2, 3, 5};

    // Creating a vector of 5 elements with
    // default value
    vector<int> v2(5, 9);

    printVector(v1);
    printVector(v2);
    return 0;
}