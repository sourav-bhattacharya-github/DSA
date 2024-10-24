#include <iostream>
using namespace std;

#include <stack>

int main()
{
    string str = "abcde";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    cout << "the reverse string : " << ans << endl;

    return 0;
}

//T.C => O(n)
// S.C => O(n)