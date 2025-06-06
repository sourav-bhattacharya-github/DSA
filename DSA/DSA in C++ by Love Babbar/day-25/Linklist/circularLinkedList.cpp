#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructer
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        if (this->next == NULL)
        {
            delete next;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void inserNode(Node *&tail, int element, int data)
{
    // assuming that element is present in the list

    // empty
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> cuur is representing element wala node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int element)
{
    // empty List
    if (tail == NULL)
    {
        cout << "List is Empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty
        // assuming that "valur" is present in the Linkked list

        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        // >= 2 Node Linked List
        else if (tail == curr)
        {
            tail = curr->next;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    inserNode(tail, 5, 3);
    inserNode(tail, 3, 5);
    inserNode(tail, 5, 7);
    inserNode(tail, 7, 9);
    inserNode(tail, 5, 6);
    inserNode(tail, 3, 2);

    print(tail);

    deleteNode(tail, 3);

    print(tail);
    return 0;
}