#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};

// Function for inorder traversal
// using Morris Traversal
void inOrderByMorris(Node *root, vector<int> &ans)
{
    Node *curr = root;

    while (curr != nullptr)
    {
        if (curr->left == nullptr)
        {

            // If no left child, visit this node
            // and go right
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else
        {

            // Find the inorder predecessor of curr
            Node *prev = curr->left;
            while (prev->right != nullptr &&
                   prev->right != curr)
            {
                prev = prev->right;
            }

            // Make curr the right child of its
            // inorder predecessor
            if (prev->right == nullptr)
            {
                prev->right = curr;
                curr = curr->left;
            }
            else
            {

                // Revert the changes made in
                // the tree structure
                prev->right = nullptr;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return;
}
void preOrderByMorris(Node *root, vector<int> &ans)
{
    Node *curr = root;

    while (curr != nullptr)
    {
        if (curr->left == nullptr)
        {

            // If no left child, visit this node
            // and go right
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else
        {

            // Find the inorder predecessor of curr
            Node *prev = curr->left;
            while (prev->right != nullptr &&
                   prev->right != curr)
            {
                prev = prev->right;
            }

            // Make curr the right child of its
            // preOrder predecessor
            if (prev->right == nullptr)
            {
                prev->right = curr;
                ans.push_back(curr->data);
                curr = curr->left;
            }
            else
            {

                // Revert the changes made in
                // the tree structure
                prev->right = nullptr;

                curr = curr->right;
            }
        }
    }
    return;
}

void postOrderByMorris(Node *root, vector<int> &ans)
{
    Node *curr = root;

    while (curr != nullptr)
    {
        if (curr->right == nullptr)
        {

            // If no right child, visit this node
            // and go left
            ans.push_back(curr->data);
            curr = curr->left;
        }
        else
        {

            // Find the inorder predecessor of curr
            Node *prev = curr->right;

            while (prev->left != nullptr &&
                   prev->left != curr)
            {
                prev = prev->left;
            }

            // Make curr the left child of its
            // postorder predecessor
            if (prev->left == nullptr)
            {
                prev->left = curr;
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else
            {

                // Revert the changes made in
                // the tree structure
                prev->left = nullptr;

                curr = curr->left;
            }
        }
    }
    //*** We want LRN but we stor NRL so we need to reverse the array */
    reverse(ans.begin(), ans.end());
    return;
}

int main()
{

    // Representation of input binary tree:
    //           1
    //          / \
    //         2   3
    //            / \  
    //           4   5
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    vector<int> inOrderAns;
    inOrderByMorris(root, inOrderAns);
    cout << "inOrder Traversal by Morris : ";
    for (int data : inOrderAns)
    {
        cout << data << " ";
    }
    cout << endl;

    vector<int> preOrdeAns;
    preOrderByMorris(root, preOrdeAns);
    cout << "preOrder Traversal by Morris : ";
    for (int data : preOrdeAns)
    {
        cout << data << " ";
    }
    cout << endl;

    vector<int> postOrdeAns;
    postOrderByMorris(root, postOrdeAns);
    cout << "postOrder Traversal by Morris : ";
    for (int data : postOrdeAns)
    {
        cout << data << " ";
    }
    cout << endl;
    return 0;
}