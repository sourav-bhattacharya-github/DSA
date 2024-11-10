#include <iostream>
using namespace std;

class KQueue
{
    int n;
    int k;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freeSport;

public:
    KQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        arr = new int[n];

        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        freeSport = 0;
    }

    void enqueue(int data, int qn)
    {
        // check Overflow
        if (freeSport == -1)
        {
            cout << "No empty space is present" << endl;
        }

        // find frist free index
        int index = freeSport;

        // update freeSport
        freeSport = next[index];

        if (front[qn - 1] == -1)
        { // check weither first element
            front[qn - 1] = index;
        }
        else
        { // link new element to the prev element
            next[rear[qn - 1]] = index;
        }

        // update next
        next[index] = -1;

        // update rear
        rear[qn - 1] = index;

        // push element
        arr[index] = data;
        // cout << "push done " << arr[index] << endl;
    }

    int dequeue(int qn)
    {
        if (front[qn - 1] == -1)
        { // check undeflow
            cout << "Queue " << qn << " is Underflow " << endl;
            return -1;
        }

        // find pop index
        int index = front[qn - 1];

        // update front
        front[qn - 1] = next[index];

        // update next
        next[index] = freeSport;

        // update free sport
        freeSport = index;

        return arr[index];
    }
};

int main()
{
    KQueue q(10, 3);

    q.enqueue(5, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);
    q.enqueue(30, 3);
    q.enqueue(32, 2);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(3) << endl;

    return 0;
}