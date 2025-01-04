#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == num - 1)
            {
                continue;
            }
            else
            {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
    // cout << "=============" << endl;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}