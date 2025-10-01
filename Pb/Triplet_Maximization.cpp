#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll x, y;
        cin >> x >> y;
        ll m = (x + y) / 3;
        ll t = min(y, m);
        cout << (m + t) << "\n";
    }
    return 0;
}