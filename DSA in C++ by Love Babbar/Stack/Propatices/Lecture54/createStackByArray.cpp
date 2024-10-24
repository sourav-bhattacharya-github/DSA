#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    // Create Stack
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Push operation
    void push(int data)
    {
        if (size - top >= 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "The Stack is Overflow " << endl;
        }
    }

    // pop operation
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "The Stack is Underflow " << endl;
        }
    }

    // shoe top element
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "The Stack is Empty " << endl;
            return -1;
        }
    }

    // Cheack Stack is Empty or not

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    // Create Stack by Class
    Stack st(5);

    // push
    st.push(10);
    st.push(12);
    st.push(2);
    st.push(25);
    st.push(15);

    // pop
    st.pop();

    // top
    cout << "Top element : " << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "The Stack is Empty " << endl;
    }
    else
    {
        cout << "The Stack is not Empty " << endl;
    }

    return 0;
}