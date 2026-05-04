#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        int n = s.size();

        unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;

        vector<vector<char>> bucket(s.size() + 1);

        for (auto &p : freq)
        {
            bucket[p.second].push_back(p.first);
        }

        string res = "";

        for (int i = s.size(); i >= 1; i--)
        {
            for (char c : bucket[i])
            {
                res += string(i, c);
            }
        }

        return res;
    }
};

int main()
{
    Solution sol;
    string s = "tree";
    string result = sol.frequencySort(s);
    cout << result << endl; // Output could be "eert" or "eetr"
    return 0;
}

/*
Question: Given a string s, sort it in decreasing order based on the frequency of the characters, and return the sorted string.

Example 1:
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once. So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

Example 2:
Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa
" and "aaaccc" are valid answers. Note that "cacaca" is incorrect, as the same characters must be together.

Example 3:
Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect. Note that 'A' and 'a' are treated as two different characters.

Constraints:
1 <= s.length <= 5 * 10^5
s consists of uppercase and lowercase English letters and digits.

========================================================================================
Approach:
1. Count the frequency of each character in the string using an unordered_map.
2. Create a bucket (vector of vectors) where the index represents the frequency and the value is a list of characters that have that frequency.
3. Iterate through the bucket in reverse order (from highest frequency to lowest) and construct the result string by repeating each character according to its frequency.

Time Complexity: O(n), where n is the length of the input string. This is because we traverse the string to count frequencies and then construct the result string.
Space Complexity: O(n), in the worst case, if all characters are unique, we will have n entries in the frequency map and the bucket. The result string also takes O(n) space.

Dry Run:
Input: s = "tree"
1. Count frequencies:
   't': 1
   'r': 1
   'e': 2
2. Create bucket:
   bucket[1] = ['t', 'r']
    bucket[2] = ['e']
3. Construct result:
   Start from bucket[4] to bucket[1]:
   - bucket[2]: add "ee" to result
   - bucket[1]: add "t" and "r" to result
   Final result: "eetr" or "eert"


*/