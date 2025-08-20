// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/k-sum-paths

// C++ Program to Count all K Sum Paths in Binary Tree
// By Exploring All Possible Paths

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int k)
    {
        data = k;
        left = nullptr;
        right = nullptr;
    }
};

// Function to count paths with sum k
// starting from the given node
int countPathsFromNode(Node *node, int k, int currentSum)
{
    if (node == nullptr)
        return 0;

    int pathCount = 0;

    // Update the current sum
    currentSum += node->data;

    // If current sum equals k, increment path count
    if (currentSum == k)
        pathCount++;

    // Recur for the left and right subtree
    pathCount += countPathsFromNode(node->left, k, currentSum);
    pathCount += countPathsFromNode(node->right, k, currentSum);

    return pathCount;
}

// Function to count all paths that
// sum to k in the binary tree
int countAllPaths(Node *root, int k)
{
    if (root == nullptr)
        return 0;

    // Count all paths starting from the current node
    int res = countPathsFromNode(root, k, 0);

    // Recur for the left and right subtree
    res += countAllPaths(root->left, k);
    res += countAllPaths(root->right, k);

    return res;
}

// ==================================================================================
// Driver program to test above functions
int main()
{

    // Create a sample tree:
    //        8
    //      /  \
    //     4    5
    //    / \    \
    //   3   2    2
    //  / \   \
    // 3  -2   1

    Node *root = new Node(8);
    root->left = new Node(4);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(2);
    root->left->left->left = new Node(3);
    root->left->left->right = new Node(-2);
    root->left->right->right = new Node(1);

    int k = 7;

    cout << countAllPaths(root, k) << endl;
    return 0;
}