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

// Find string char
 std::string my_string = "Hello, world!";
    char char_to_find = 'o';

    // Find the first occurrence of 'o'
    size_t found_pos = my_string.find(char_to_find);

    // Check if the character was found
    if (found_pos != std::string::npos) {
        std::cout << "Character '" << char_to_find << "' found at position: " << found_pos << std::endl;
    } else {
        std::cout << "Character '" << char_to_find << "' not found." << std::endl;
    }

    // Find a character that doesn't exist in the string

    // deref
  int x ;
   x =5;
   int *ptr = &x;
   cout<<*ptr<<endl;
   return 0;
}
