#include <iostream>
#include <queue>
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

void bulidFromLevelOrder(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "Enter data for root" << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter left node for : " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for : " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

void levelOrderTravesal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // previous level traverse complete
            cout << endl;

            if (!q.empty())
            { // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
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

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    Node *root = NULL;

    // create a Tree

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // root = buildTree(root);
    bulidFromLevelOrder(root);

    // level order
    cout << endl
         << "Printing the level order tracersal output : " << endl;
    levelOrderTravesal(root);

    // inorder Traversal
    cout << endl
         << "Inorder traversal is : ";
    inorder(root);

    cout << endl
         << "Inorder traversal By Iteration is : ";
    inOrderByiterative(root);

    // preorder Traversal
    cout << endl
         << "Preorder traversal is : ";
    preorder(root);

    cout << endl
         << "Preorder traversal by Iteration is : ";
    preOrderByiterative(root);

    // postorder Traversal
    cout << endl
         << "Postorder traversal is : ";
    postorder(root);

    cout << endl
         << "Postorder traversal by Iteration is : ";
    postOrderByiterative(root);

    return 0;
}