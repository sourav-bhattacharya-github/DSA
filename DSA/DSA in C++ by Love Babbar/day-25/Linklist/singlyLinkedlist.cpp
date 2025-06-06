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

void insertAtHead(Node *&head, int data)
{
    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position)
    {
        temp = temp->next;

        if (temp->next == NULL)
        {
            insertAtTail(tail, data);
            return;
        }
        cnt++;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    // deleting first or dtart node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    { // deletirng any middle node or last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 2;
        while (cnt <= position)
        {
            prev = curr;
            curr = curr->next;
            if (curr->next == NULL)
            {
                tail = prev;
                tail->next = NULL;
                break;
            }
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // create a new Node
    Node *node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    insertAtTail(tail, 15);

    // insert any position in Sigely Linked List
    insertAtPosition(head, tail, 1, 22);
    insertAtPosition(head, tail, 4, 50);

    cout << "before Delete : ";
    print(head);

    // deletion
    deleteNode(head, tail, 5);

    cout << "After Delete : ";
    print(head);

    cout << "head :" << head->data << endl;
    cout << "tail : " << tail->data << endl;
    return 0;
}