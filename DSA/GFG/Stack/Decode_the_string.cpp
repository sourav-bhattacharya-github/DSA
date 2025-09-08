// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/stack-gfg-160/problem/decode-the-string2444

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string decodedString(string &s)
{
    string res = "";

    for (int i = 0; i < s.length(); i++)
    {

        // If the current character is not a clostring
        // bracket, append it to the result string.
        if (s[i] != ']')
        {
            res.push_back(s[i]);
        }

        else
        {
            string temp = "";
            while (!res.empty() && res.back() != '[')
            {
                temp.push_back(res.back());
                res.pop_back();
            }

            // Reverse the temporary string to obtain the
            // correct substring.
            reverse(temp.begin(), temp.end());

            // Remove the opening bracket from the result
            // string.
            res.pop_back();

            // Extract the preceding number and convert it
            // to an integer.
            string num = "";
            while (!res.empty() && res.back() >= '0' && res.back() <= '9')
            {
                num.push_back(res.back());
                res.pop_back();
            }
            reverse(num.begin(), num.end());
            int p = stoi(num);

            // Append the substring to the result string,
            // repeat it to the required number of times.
            while (p--)
            {
                res.append(temp);
            }
        }
    }

    // Return the decoded string.
    return res;
}

// ============================================================================
// Driver program to test above functions
int main()
{
    string s = "3[b2[ca]]";
    cout << decodedString(s);
    return 0;
}
