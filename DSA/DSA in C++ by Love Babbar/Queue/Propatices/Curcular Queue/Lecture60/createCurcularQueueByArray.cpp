#include <iostream>

using namespace std;
#include <bits/stdc++.h>

class CircularQueue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        // Overflow
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        // first element to push
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0; // to maintain cyclic nature
        }
        else
        {
            rear++; // normal flow
        }

        arr[rear] = value; // push
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        // underflow
        if (front == -1)
        { // to check queue is empty
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        // single element is present
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0; // to maintain cyclic nature
        }
        else
        {
            front++; // normal flow
        }
        return ans;
    }
};