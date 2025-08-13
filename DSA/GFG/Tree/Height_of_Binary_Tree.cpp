// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/height-of-binary-tree

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node *root)
{
    if (!root)
        return 0;

    // Initializing a queue to traverse
    // the tree level by level
    queue<Node *> q;
    q.push(root);
    int depth = 0;

    // Loop until the queue is empty
    while (!q.empty())
    {
        int levelSize = q.size();

        // Traverse all nodes at the current level
        for (int i = 0; i < levelSize; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }

        // Increment depth after traversing each level
        depth++;
    }
    return depth - 1;
}

// ================================================================================================s
// Driver code
int main()
{

    // Representation of the input tree:
    //     12
    //    /  \
    //   8   18
    //  / \
    // 5   11
    Node *root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(18);
    root->left->left = new Node(5);
    root->left->right = new Node(11);

    cout << height(root);

    return 0;
}