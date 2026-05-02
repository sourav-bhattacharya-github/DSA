#include <bits/stdc++.h>
using namespace std;

template <typename T>
class ListNode
{
public:
    T val;
    ListNode *next;
    ListNode() : val(T()), next(nullptr) {}
    ListNode(T x) : val(x), next(nullptr) {}
    ListNode(T x, ListNode *next) : val(x), next(next) {}
};

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
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}