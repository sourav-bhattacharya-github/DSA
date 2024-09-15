#include <iostream>
using namespace std;

void show_note(int amount)
{
    int num = 1, note = 0;
    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount - (note * 100);
        cout << "The number of 100 notes " << note << endl;
    }
    case 2:
    {
        note = amount / 50;
        amount = amount - (note * 50);
        cout << "The number of 50 notes " << note << endl;
    }
    case 3:
    {
        note = amount / 20;
        amount = amount - (note * 20);
        cout << "The number of 20 notes " << note << endl;
    }
    case 4:
    {
        note = amount / 10;
        amount = amount - (note * 10);
        cout << "The number of 10 notes " << note << endl;
    }
    case 5:
    {
        note = amount / 1;
        cout << "The number of 1 notes " << note << endl;
    }
    }
}

int main()
{
    cout << "Enter Amount  :" << endl;
    int amut;
    cin >> amut;

    show_note(amut);
    return 0;
}