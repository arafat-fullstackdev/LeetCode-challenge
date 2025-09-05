#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) { 
        stack<char> str;

        for(char ch:s){
            if(ch == '(' || ch == '[' ch == '{'){
                str.push(ch);
            }else{
                if(str.empty()){ 
                    return false;
                }
                char top = str.top();
                str.pop();
                if(ch == ')' && top != '(') return false;
                if(ch == ']' && top != '[') return false;
                if(ch == '}' && top != '{') return false;
            }
        }
        return str.empty();
        
    }
};