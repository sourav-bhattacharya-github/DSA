#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    // Constructor to initialize the node with a value and set next to nullptr
    ListNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    // Constructor to initialize the node with a value and a pointer to the next node
    ListNode(int data, ListNode *node)
    {
        this->data = data;
        this->next = node;
    }
};

ListNode *createArrayToLinkedList(vector<int> arr)
{
    ListNode *head = new ListNode(arr[0]);
    ListNode *moveNode = head; // Pointer to keep track of the current node while building the linked list

    for (int i = 1; i < arr.size(); i++)
    {
        ListNode *newNode = new ListNode(arr[i]);

        // Link the new node to the current node and move the pointer to the new node
        moveNode->next = newNode;
        moveNode = newNode; // Move the pointer to the newly created node
    }

    return head; // Return the head of the linked list
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    // Creating the head of the linked list
    ListNode *head = createArrayToLinkedList(arr);

    // Print the linked list
    ListNode *current = head; // Pointer to traverse the linked list
    while (current != nullptr)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "nullptr" << endl;
    // Output: 1->2->3->4->5->nullptr

    // Manually creating a linked list with 3 nodes
    ListNode *node3 = new ListNode(3, nullptr);
    ListNode *node2 = new ListNode(2, node3);
    ListNode *node1 = new ListNode(1, node2);

    // Print the linked list
    current = node1; // Start from the head of the linked list
    while (current != nullptr)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "nullptr" << endl;
    // Output: 1->2->3->nullptr

    return 0;
}