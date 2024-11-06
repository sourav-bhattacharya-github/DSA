#include <iostream>
using namespace std;

// include Queue file
#include <queue>

int main()
{

    queue<int> q;

    q.push(22);
    cout << "front of q is : " << q.front() << endl;
    q.push(7);
    cout << "front of q is : " << q.front() << endl;
    q.push(50);
    cout << "front of q is : " << q.front() << endl;
    q.push(15);
    cout << "front of q is : " << q.front() << endl;

    q.pop();
    q.pop();

    cout << "After pop 2 element front of q is : " << q.front() << endl;
    cout << "size of queue : " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        cout << "Queue is not empty " << endl;
    }
    return 0;
}