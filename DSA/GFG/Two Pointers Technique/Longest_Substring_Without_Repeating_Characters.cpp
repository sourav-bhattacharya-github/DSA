//  Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/two-pointer-technique-gfg-160/problem/longest-distinct-characters-in-string5848

#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubstr(string &s)
{
    int n = s.size();
    int res = 0;

    vector<int> lastIndex(26, -1);

    // Initialize start of current window
    int start = 0;

    // Move end of current window
    for (int end = 0; end < n; end++)
    {

        start = max(start, lastIndex[s[end] - 'a'] + 1);

        // Update result if we get a larger window
        res = max(res, end - start + 1);

        // Update last index of s[end]
        lastIndex[s[end] - 'a'] = end;
    }
    return res;
}

int main()
{
    string s = "geeksforgeeks";
    cout << longestUniqueSubstr(s);
    return 0;
}