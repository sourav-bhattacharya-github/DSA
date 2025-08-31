// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/stack-gfg-160/problem/parenthesis-checker2744

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isBalanced(string &s)
{
    // stack top index in string
    int top = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            // push opening bracket
            s[++top] = s[i];
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            // no opening bracket
            if (top == -1)
                return false;
            if ((s[i] == ')' && s[top] != '(') ||
                (s[i] == '}' && s[top] != '{') ||
                (s[i] == ']' && s[top] != '['))
            {
                return false;
            }
            top--;
        }
    }
    // balanced if stack empty
    return top == -1;
}

// ============================================================================
// Driver program to test above functions
int main()
{
    vector<string> testCases = {"[{()}]", "[()()]{}", "(]", "([{]})"};
    for (auto &s : testCases)
    { // pass each string by reference
        cout << "Input: " << s << " -> Output: "
             << (isBalanced(s) ? "true" : "false") << endl;
    }
    return 0;
}