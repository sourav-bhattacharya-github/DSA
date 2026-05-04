// Notion Link: https://www.notion.so/Q2-Maximum-Nesting-Depth-of-the-Parentheses-34cd676bc1b5800a81f0db94adbc09a0#34cd676bc1b580ea94cdd2f6985adf8a

#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int current = 0, maxDepth = 0;

    // Iterate through each character in the string
    for (char c : s)
    {
        if (c == '(')
        {
            current++;
            maxDepth = max(maxDepth, current);
        }
        else if (c == ')')
        {
            current--;
        }
    }

    return maxDepth;
}

int main()
{
    string s = "(1+(2*3)+((8)/4))+1";
    cout << maxDepth(s) << endl; // Output: 3
    return 0;
}
