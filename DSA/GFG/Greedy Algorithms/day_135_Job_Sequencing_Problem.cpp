// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/greedy-gfg-160/problem/job-sequencing-problem-1587115620

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit)
{

    int n = deadline.size();
    vector<int> ans = {0, 0};
    vector<pair<int, int>> jobs;
    for (int i = 0; i < n; i++)
    {
        jobs.push_back({deadline[i], profit[i]});
    }

    // sort the jobs based on deadline
    // in ascending order
    sort(jobs.begin(), jobs.end());
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < jobs.size(); i++)
    {

        // if job can be scheduled within its deadline
        if (jobs[i].first > pq.size())
            pq.push(jobs[i].second);

        // replace the job with the lowest profit
        else if (!pq.empty() && pq.top() < jobs[i].second)
        {
            pq.pop();
            pq.push(jobs[i].second);
        }
    }

    while (!pq.empty())
    {
        ans[1] += pq.top();
        pq.pop();
        ans[0]++;
    }

    return ans;
}

//============================================================================
// Driver program to test above functions
int main()
{
    vector<int> deadline = {2, 1, 2, 1, 1};
    vector<int> profit = {100, 19, 27, 25, 15};
    vector<int> ans = jobSequencing(deadline, profit);
    cout << ans[0] << " " << ans[1];
    return 0;
}