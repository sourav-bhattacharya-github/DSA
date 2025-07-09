// Link: https://www.geeksforgeeks.org/find-all-triplets-with-zero-sum/

// C++ program to find all triplets with zero sum
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr)
{

    // Map to store indices for each value
    unordered_map<int, vector<int>> map;

    // Resultant array
    vector<vector<int>> ans;

    // Check for all pairs i, j
    for (int j = 0; j < arr.size(); j++)
    {
        for (int k = j + 1; k < arr.size(); k++)
        {

            // Value of third index should be
            int val = -1 * (arr[j] + arr[k]);

            // If such indices exists
            if (map.find(val) != map.end())
            {

                // Append the i, j, k
                for (auto i : map[val])
                {
                    ans.push_back({i, j, k});
                }
            }
        }

        // After j'th index is traversed
        // We can use it as i.
        map[arr[j]].push_back(j);
    }

    return ans;
}

int main()
{
    vector<int> arr = {0, -1, 2, -3, 1};
    vector<vector<int>> res = findTriplets(arr);
    for (int i = 0; i < res.size(); i++)
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;

    return 0;
}
}