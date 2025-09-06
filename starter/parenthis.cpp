#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> str;

        for (char ch : s)
        {
            if (ch == '(' || ch == '[' || ch == '{')
            {
                str.push(ch);
            }
            else
            {
                if (str.empty())
                {
                    return false;
                }
                char top = str.top();
                str.pop();
                if (ch == ')' && top != '(')
                    return false;
                if (ch == ']' && top != '[')
                    return false;
                if (ch == '}' && top != '{')
                    return false;
            }
        }
        return str.empty();
    }

    // pointer in C
    int myAge = 43;  // An int variable
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

//   // Output the value of myAge (43)
//   cout<<"%d\n", myAge<<endl;

//   // Output the memory address of myAge (0x7ffe5367e044)
//   cout("%p\n", &myAge);

//   // Output the memory address of myAge with the pointer (0x7ffe5367e044)
//   cout("%p\n", ptr);
};