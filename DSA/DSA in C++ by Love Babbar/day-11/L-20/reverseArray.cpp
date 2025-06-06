#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void printArray(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(5);
    v.push_back(1);
    v.push_back(15);
    v.push_back(25);

    cout << "The old Array : ";
    printArray(v);

    vector<int> ans = reverse(v);

    cout << "The new Reverse Array : ";
    printArray(ans);
}