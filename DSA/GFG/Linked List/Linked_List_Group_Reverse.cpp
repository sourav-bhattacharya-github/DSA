// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/linked-list-gfg-160/problem/reverse-a-linked-list-in-groups-of-given-size

/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution
{
public:
    Node *reverseKGroup(Node *head, int k)
    {
        // code here
        if (head == NULL || k <= 1)
            return head;

        stack<Node *> st;
        Node *curr = head;
        Node *prev = NULL;
        Node *newHead = NULL;

        while (curr != NULL)
        {
            int count = 0;
            Node *temp = curr;

            // push k node onto the stack
            while (count < k && temp != NULL)
            {
                st.push(temp);
                temp = temp->next;
                count++;
            }

            // Pop and reverse the group
            while (!st.empty())
            {
                if (prev == NULL)
                {
                    // Frist group, update new head
                    prev = st.top();
                    newHead = prev;
                    st.pop();
                }
                else
                {
                    prev->next = st.top();
                    prev = prev->next;
                    st.pop();
                }
            }

            // Point to the next group
            curr = temp;
        }

        // last node should point to NULL
        if (prev != NULL)
        {
            prev->next = NULL;
        }

        return newHead;
    }
};