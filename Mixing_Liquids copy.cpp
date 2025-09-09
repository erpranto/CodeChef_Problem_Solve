#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int res = 0;
    while (true)
    {
        a--;
        b -= 2;
        if (a < 0 || b < 0)
            break;
        res += 3;
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    int res = 0;
    while (t--)
    {
        solve();
    }
    return 0;
}