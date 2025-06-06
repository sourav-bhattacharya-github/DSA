#include <iostream>
using namespace std;

// for include Stack
#include <stack>

int main()
{

    // Create a Stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(5);
    s.push(12);
    s.push(7);

    // pop operation
    s.pop();

    // show top element
    cout << "Printing top element : " << s.top() << endl;

    // cheack stack is empty or not
    if (s.empty())
    {
        cout << "The Stack is Empty " << endl;
    }
    else
    {
        cout << " The Stack is not Empty " << endl;
    }

    // Size of stack
    cout << "the size of Stack : " << s.size() << endl;
    
    return 0;
}