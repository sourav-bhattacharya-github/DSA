// Link:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/greedy-gfg-160/problem/circular-tour-1587115620

#include <iostream>
#include <vector>
using namespace std;

int startStation(vector<int> &gas, vector<int> &cost)
{
    int n = gas.size();

    // Variables to track total and current remaining gas
    int totalGas = 0;
    int currGas = 0;
    int startIdx = 0;

    // Traverse through each station to calculate remaining
    // gas in the tank, and total gas
    for (int i = 0; i < n; i++)
    {
        currGas += gas[i] - cost[i];
        totalGas += gas[i] - cost[i];

        // If currGas is negative, circular tour can't
        // start with this index, so update it to next one
        if (currGas < 0)
        {
            currGas = 0;
            startIdx = i + 1;
        }
    }

    // No solution exist
    if (totalGas < 0)
        return -1;

    return startIdx;
}

//============================================================================
// Driver program to test above functions
int main()
{
    vector<int> gas = {4, 5, 7, 4};
    vector<int> cost = {6, 6, 3, 5};
    cout << startStation(gas, cost);
    return 0;
}