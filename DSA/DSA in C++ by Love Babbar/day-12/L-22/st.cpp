#include <iostream>

using namespace std;

char valid(char ch)
{

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        return 0;
    }
}

char lowerCase(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {
        return (ch - 'A' + 'a');
    }
    else
    {
        return ch;
    }
}
int main()
{
    string s = "C1 O$d@eeD o1c";
    // s.erase(5, 2);
    // for(int i = 0; i < s.length(); i++){

    // }
    cout << s << endl;

    cout << valid(s[5]) << endl;

    cout << lowerCase(s[0]) << endl;
    return 0;
}
