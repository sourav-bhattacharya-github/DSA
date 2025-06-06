#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

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

Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
        temp = temp->left;

    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
        temp = temp->right;

    return temp;
}

Node *insertIntoBST(Node *root, int data)
{
    // basr case
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // right part me insrt karna h
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void takeinput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

Node *deleteFromBST(Node *root, int val)
{
    // base care
    if (root == NULL)
        return root;

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else if (root->data < val)
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

int main()
{
    Node *root = NULL;

    cout << "Enter data to create BST : " << endl;
    takeinput(root);

    cout << " Printing BST " << endl;
    levelOrderTravesal(root);

    cout << "InOrder Traversal : ";
    inorder(root);
    cout << endl;

    cout << "preorder Traversal : ";
    preorder(root);
    cout << endl;

    cout << "postorder Traversal : ";
    postorder(root);
    cout << endl;

    cout << "Min value is : " << minVal(root)->data;
    cout << endl;

    cout << "Max value is : " << maxVal(root)->data;
    cout << endl;

    int ifDelete;
    cout << "if want delete press 1 : ";
    cin >> ifDelete;
    if (ifDelete == 1)
    {
        int val;
        cout << "Enter delete Node : ";
        cin >> val;
        root = deleteFromBST(root, val);
    }

    cout << "After Printing BST " << endl;
    levelOrderTravesal(root);

    cout << "After Printing BST " << endl;
    inorder(root);

    return 0;
}

// 10 8 21 7 27 5 4 3 -1