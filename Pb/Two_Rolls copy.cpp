#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    bool flag = false;
    for (int i = 0; i <= 5; i++)
    {
        int d1 = y + i;
        for (int j = 0; j <= 5; j++)
        {
            int d2 = y + j;
            if (x + d1 + d2 == 50)
                flag = true;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}