// Questions Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/article/MTc4MQ%3D%3D

class Solution
{
    const int MAX_CHAR = 26;

public:
    int firstUniqChar(string s)
    {
        vector<int> vis(MAX_CHAR, -1);

        for (int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';

            if (vis[index] == -1)
            {
                vis[index] = i;
            }
            else
            {
                vis[index] = -2;
            }
        }

        int idx = -1;
        for (int i = 0; i < MAX_CHAR; i++)
        {
            if (vis[i] >= 0 && (idx == -1 || vis[i] < vis[idx]))
            {
                idx = i;
            }
        }

        return (idx == -1) ? -1 : vis[idx];
    }
    
};
