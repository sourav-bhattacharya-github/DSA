#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of : " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrderByiterative(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> s;
    Node *curr = root;

    while (curr != NULL || !s.empty())
    {

        // Reach the left most Node of the
        while (curr != NULL)
        {
            // the stack before traversing
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        // left subtree.  Now, it's right
        curr = curr->right;
    }
}

void preOrderByiterative(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> s;
    Node *curr = root;

    while (curr != NULL || !s.empty())
    {

        // Reach the left most Node of the
        while (curr != NULL)
        {
            cout << curr->data << " ";
            // the stack before traversing
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        // left subtree.  Now, it's right
        curr = curr->right;
    }
}

void postOrderByiterative(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> stk1, stk2;
    stk1.push(root);
    Node *curr;

    while (!stk1.empty())
    {
        curr = stk1.top();
        stk1.pop();
        stk2.push(curr);

        if (curr->left)
        {
            stk1.push(curr->left);
        }
        if (curr->right)
        {
            stk1.push(curr->right);
        }
    }

    while (!stk2.empty())
    {
        cout << stk2.top()->data << " ";
        stk2.pop();
    }
}

int main()
{

    Node *root = NULL;

    // create a Tree

    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // inorder Traversal
    cout << endl
         << "Inorder traversal By Iteration is : ";
    inOrderByiterative(root);

    // preorder Traversal
    cout << endl
         << "Preorder traversal by Iteration is : ";
    preOrderByiterative(root);

    // postorder Traversal
    cout << endl
         << "Postorder traversal by Iteration is : ";
    postOrderByiterative(root);

    return 0;
}