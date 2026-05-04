#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// Insert at beginning
Node *insertAtHead(Node *head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    return newNode;
}

// Insert at end
Node *insertAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        return newNode;
    }

    Node *move = head;

    while (move->next != NULL)
    {
        move = move->next;
    }

    move->next = newNode;
    return head;
}

// insert at Tail
Node *insertAtTail(Node *head, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        return newNode;
    }

    Node *move = head;

    while (move->next != NULL)
    {
        move = move->next;
    }

    move->next = newNode;
    return head;
}

// Insert at position
Node *insertAtPosition(Node *head, int data, int position)
{

    Node *newNode = new Node(data);

    if (position == 1)
    {
        newNode->next = head;
        return newNode;
    }

    Node *move = head;

    for (int i = 1; i < position - 1 && move != NULL; i++)
    {
        move = move->next;
    }

    if (move == NULL)
        return head;

    newNode->next = move->next;
    move->next = newNode;

    return head;
}

// search in linked list
bool search(Node *head, int key)
{
    Node *move = head;

    while (move != NULL)
    {
        if (move->data == key)
            return true;
        move = move->next;
    }
    return false;
}

// Length of linked list
int length(Node *head)
{
    Node *move = head;

    int count = 0;

    while (move != nullptr)
    {
        count++;
        move = move->next;
    }

    return count;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *move = head;
    while (move != NULL)
    {
        cout << move->data << "->";
        move = move->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    Node *head = NULL;

    head = insertAtTail(head, 10);
    head = insertAtTail(head, 20);
    head = insertAtTail(head, 30);
    head = insertAtHead(head, 5);

    printList(head);
    head = insertAtPosition(head, 15, 2);
    printList(head);

    // search for an element
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    cout << "Element " << key << (search(head, key) ? " found in the linked list." : " not found in the linked list.") << endl;

    cout << "Length of linked list: " << length(head) << endl;
}