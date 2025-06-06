// **https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
#include <iostream>
using namespace std;

#include <stack>

void insertAtBottom(stack<int> &stack, int num)
{ // this push element at bottom by recursion
    if (stack.empty())
    {
        stack.push(num);
        return;
    }

    int x = stack.top();
    stack.pop();
    insertAtBottom(stack, num);

    stack.push(x);
}

void reverseStack(stack<int> &stack)
{
    // Write your code here
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main()
{

    stack<int> st;

    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}

// T.c => O(n)
// S>C => O(n)