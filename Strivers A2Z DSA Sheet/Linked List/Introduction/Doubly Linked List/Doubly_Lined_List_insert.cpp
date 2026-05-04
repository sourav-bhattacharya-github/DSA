#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// Insert a new node at first position of the doubly linked list
Node *insertAtHead(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}

// Insert a new node at last position of the doubly linked list
Node *insertAtTail(Node *head, int data)
{
    Node *newNode = new Node(data);

    if (head == nullptr)
    {
        return newNode;
    }

    Node *move = head;

    while (move->next != nullptr)
    {
        move = move->next;
    }
    move->next = newNode;
    newNode->prev = move;
    return head;
}

// Insert a new node at given position of the doubly linked list
Node *insertAtPosition(Node *head, int data, int pos)
{
    Node *newNode = new Node(data);

    if (pos == 1)
    {
        newNode->next = head;
        if (head != nullptr)
            head->prev = newNode;
    }

    Node *move = head;

    for (int i = 1; i < pos - 1; i++)
    {
        move = move->next;
    }

    newNode->next = move->next;
    newNode->prev = move;

    if (move->next != nullptr)
    {
        move->next->prev = newNode;
    }
    move->next = newNode;
    return head;
}

// Seacch for a node in the doubly linked list
bool searchNode(Node *head, int key)
{
    Node *move = head;

    while (move != nullptr)
    {
        if (move->data == key)
        {
            return true;
        }
    }

    return false;
}

// print the doubly linked list
void printList(Node *head)
{
    Node *move = head;
    while (move != nullptr)
    {
        cout << move->data << "<->";
        move = move->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 6};
    Node *head = nullptr;
    for (int i = 0; i < arr.size(); i++)
    {
        head = insertAtTail(head, arr[i]);
    }
    head = insertAtHead(head, 1);
    head = insertAtPosition(head, 10, 3);

    cout << "Doubly Linked List: " << endl;
    // Print the doubly linked list
    printList(head);
}