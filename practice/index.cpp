#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr={1,2,3,-2,-5,-6};
    vector<char> ch={'a','b','c'};
   
    char value = ch[0,2];
    // cout<<arr.size()<<endl;
    // cout<<"Char"<<value<<endl;
    std:: vector<std::string> str;
    str.push_back("a");
    str.push_back("b");

    cout<<"String Value "<<str[0]<<endl;
    return 0;
}