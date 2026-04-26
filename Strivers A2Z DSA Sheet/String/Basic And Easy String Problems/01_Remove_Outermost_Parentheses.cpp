// https://leetcode.com/problems/remove-outermost-parentheses/description/?utm=codolio

#include <string>
#include <iostream>

using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int count = 0; // keeps track of open parentheses
        string result = "";

        for (char ch : s)
        {
            if (ch == ')')
            {
                count--;
            }
            if (count != 0)
            {
                result += ch;
            }
            if (ch == '(')
            {
                count++;
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;
    string s = "(()())(())";
    string result = solution.removeOuterParentheses(s);
    cout << result << endl; // Output: "()()()"
    return 0;
}

/*
Question:
A valid parentheses string is either empty (""), "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation. For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings. A valid parentheses string S is primitive if it is nonempty, and there does not exist a way to split it into S = A + B, with A and B nonempty valid parentheses strings.


Example 1:
Input: "(()())(())"
Output: "()()()"
Explanation: The input string is "(()())(())",
            with primitive decomposition "(()())" + "(())".
            After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

Example 2:
Input: "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: The input string is "(()())(())(()(()))",
            with primitive decomposition "(()())" + "(())" + "(()(()))".
            After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".

Constraints:
1 <= S.length <= 10^5
S[i] is either '(' or ')'.

=========================================================================
Optimal Approach:
Step 1: Initialize a counter to keep track of the number of open parentheses and an empty string to store the result.
Step 2: Iterate through each character in the input string:
    - If the character is '(', increment the counter. If the counter is greater than 1, append the character to the result string (this means it's not an outermost parenthesis).
    - If the character is ')', decrement the counter. If the counter is greater than 0 after decrementing, append the character to the result string (this means it's not an outermost parenthesis).
Step 3: Return the result string after processing all characters.

Important Notes:
- The counter helps to identify when we are inside a primitive valid parentheses string. When the counter is 0, it means we are at the outermost level, and we should not include those parentheses in the result.


Time Complexity: O(n), where n is the length of the input string S, since we need to iterate through each character once.
Space Complexity: O(n), in the worst case, if all parentheses are nested, the result string could be of the same length as the input string. However, in general, it will be less than or equal to n.

Dry Run:
Input: "(()())(())"
- Initialize count = 0, result = ""

- Iterate through each character:
 i      input char    count    result
 0       '('           1        "" (not added to result)
 1       '('           2        "(" (added to result)
 2       ')'           1        "()" (added to result)
 3       '('           2        "()(" (added to result)
 4       ')'           1        "()()" (added to result)
 5       ')'           0        "()()" (not added to result)
 6       '('           1        "()()" (not added to result)
 7       '('           2        "()()(" (added to result)
 8       ')'           1        "()()()" (added to result)
 9       ')'           0        "()()()" (not added to result)

- Final result: "()()()"
*/