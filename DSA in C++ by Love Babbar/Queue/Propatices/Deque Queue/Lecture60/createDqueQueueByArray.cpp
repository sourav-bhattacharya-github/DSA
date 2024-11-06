#include <bits/stdc++.h>
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Overflow
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0; // insert frist element
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1; // to maintain cyclic nature
        }
        else
        {
            front--; // normal flow
        }

        arr[front] = x; // push element

        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0; // insert frist element
        }
        else if (rear == size && front != 0)
        {
            rear = 0; // to maintain cyclic nature
        }
        else
        {
            rear++; // normal flow
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        { // single element
            front = rear = -1;
        }
        else if (front == size - 1 & rear != 0)
        {
            front = 0; // to maintain cyclic nature
        }
        else
        {
            front++; // normal flow
        }

        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if (isEmpty())
        {
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if (rear == front)
        { // single element
            front = rear = -1;
        }
        else if (rear == 0 && front != size - 1)
        {
            rear = size - 1; // to maintain cyclic nature
        }
        else
        {
            rear--; // normal flow
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};