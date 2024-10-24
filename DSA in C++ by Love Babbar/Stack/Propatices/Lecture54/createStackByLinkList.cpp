#include <iostream>
using namespace std;

// Create Node class
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    // head of the linked list
    Node *head;

public:
    // Constructor to initialize the stack
    Stack()
    {
        this->head = NULL;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int new_data)
    {
        Node *new_node = new Node(new_data);

        if (!new_node)
        {
            cout << "Stack Overflow";
            return;
        }

        new_node->next = head;
        // Update the top to the new node
        head = new_node;
    }

    void pop()
    {
        if (this->isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    int peek()
    {
        if (!isEmpty())
        {
            return head->data;
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return INT32_MIN;
        }
    }
};

int main() {
        // Creating a stack
    Stack st;

    // Push elements onto the stack
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);

    // Print top element of the stack
    cout << "Top element is " << st.peek() << endl;

    // removing two elemements from the top
      cout << "Removing two elements..." << endl;
    st.pop();
    st.pop();

    // Print top element of the stack
    cout << "Top element is " << st.peek() << endl;

    return 0;
}