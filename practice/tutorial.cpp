#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    //? Pointers
    string food = "Pizza";
    string *ptrC = &food;

    cout << food << endl;
    cout << ptrC << endl;
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptrC << endl;
    // Modify the value
    *ptrC = "MacDonald";
    cout << *ptrC << endl;

    return 0;
}