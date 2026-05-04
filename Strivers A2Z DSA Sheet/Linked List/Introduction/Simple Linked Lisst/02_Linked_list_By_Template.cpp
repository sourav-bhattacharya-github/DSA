#include <bits/stdc++.h>
using namespace std;

template <typename T>
class ListNode
{
public:
    T val;
    ListNode *next;
    ListNode() : val(T()), next(nullptr) {}               // Default constructor initializes val to default value of T and next to nullptr
    ListNode(T x) : val(x), next(nullptr) {}              // Constructor that initializes val to x and next to nullptr
    ListNode(T x, ListNode *next) : val(x), next(next) {} // Constructor that initializes val to x and next to the provided ListNode pointer
};

// Even though template is written outside the class syntax-wise, it logically belongs only to that class, so each class must declare its own template parameter
template <typename T>
class LinkedList
{
public:
    ListNode<T> *head;
    LinkedList() : head(nullptr) {}
};

int main()
{
    LinkedList<int> list;
    list.head = new ListNode<int>(1);
    list.head->next = new ListNode<int>(2);
    list.head->next->next = new ListNode<int>(3);

    // Print the linked list
    ListNode<int> *current = list.head;
    while (current != nullptr)
    {
        cout << current->val << "->";
        current = current->next;
    }
    cout << "nullptr" << endl;

    return 0;
}
