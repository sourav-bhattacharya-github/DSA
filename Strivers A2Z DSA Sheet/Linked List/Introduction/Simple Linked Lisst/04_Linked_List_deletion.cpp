#include <iostream>

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

// delete at head
Node *deleteAtHead(Node *head)
{
    if (head == nullptr)
        return nullptr;

    Node *temp = head;
    head = temp->next;

    delete temp;
    return head;
}

// delete at end
Node *deleteAtTail(Node *head)
{
    Node *move = head;

    while (move->next->next != nullptr)
    {
        move = move->next;
    }

    Node *temp = move->next;
    move->next = nullptr;

    delete temp;

    return head;
}

// delete at position
Node *deleteAtPosition(Node *head, int position)
{
    Node *move = head;

    if (position == 1)
    {
        head = move->next;
        delete move;
        return head;
    }

    for (int i = 1; i < position - 1 && move != nullptr; i++)
    {
        move = move->next;
    }

    if (move == nullptr || move->next == nullptr)
        return head;

    Node *temp = move->next;
    move->next = temp->next;
    delete temp;

    return head;
}

void printList(Node *head)
{
    Node *move = head;

    while (move != nullptr)
    {
        cout << move->data << "->";
        move = move->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    Node *head = nullptr;

    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    // Print the linked list
    printList(head);

    // Deleting head
    head = deleteAtHead(head);
    cout << "After deleting head: ";
    printList(head);

    // Deleting at tail
    head = deleteAtTail(head);
    cout << "After deleting tail: ";
    printList(head);

    // Deleting at position
    head = deleteAtPosition(head, 2);
    cout << "After deleting at position 2: ";
    printList(head);
    return 0;
}