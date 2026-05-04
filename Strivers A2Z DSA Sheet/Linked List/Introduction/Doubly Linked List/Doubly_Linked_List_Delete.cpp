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

// Delete a node at first position of the doubly linked list
Node *deleteAtHead(Node *head)
{
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
    return head;
}

// Delete a node at last position of the doubly linked list
Node *deleteAtTail(Node *head)
{
    if (head == nullptr)
        return nullptr;

    Node *move = head;

    if (move->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    while (move->next->next != nullptr)
        move = move->next;

    Node *temp = move->next;
    move->next = nullptr;
    delete temp;
    return head;
}

// Delete a node at given position of the doubly linked list
Node *deleteAtPosition(Node *head, int pos)
{
    if (head == nullptr)
        return nullptr;

    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;

        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        delete temp;
        return head;
    }

    Node *move = head;

    for (int i = 1; i < pos - 1; i++)
    {
        move = move->next;
        if (move == nullptr)
            return head; // Position is out of bounds
    }

    if (move->next == nullptr)
        return head; // Position is out of bounds

    Node *temp = move->next;
    move->next = temp->next;

    if (temp->next != nullptr)
    {
        temp->next->prev = move;
    }

    delete temp;
    return head;
}

// Function to create a doubly linked list from a vector of integers
Node *createDoublyLinkedList(vector<int> arr)
{
    int n = arr.size();
    if (n == 0)
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *current = head;

    for (int i = 1; i < n; i++)
    {
        Node *newNode = new Node(arr[i]);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    return head;
}

// print the doubly linked list
void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << "<->";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = createDoublyLinkedList(arr);

    // Delete at head
    head = deleteAtHead(head);

    // Delete at tail
    head = deleteAtTail(head);

    // print the doubly linked list
    printList(head);

    // Delete at position
    int pos;
    cout << "Enter the position to delete: ";
    cin >> pos;
    head = deleteAtPosition(head, pos);

    // Print the doubly linked list
    printList(head);

    return 0;
}