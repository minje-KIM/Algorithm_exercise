#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num = 0;
    cin >> num;

    for (int i=num; i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}