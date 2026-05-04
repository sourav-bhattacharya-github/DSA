#include <bits/stdc++.h>
using namespace std;

//structure of a node in a doubly linked list
// [prev | data | next ]
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

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *head = createDoublyLinkedList(arr);
    // Print the doubly linked list
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}