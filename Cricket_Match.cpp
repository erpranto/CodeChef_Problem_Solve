#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m * 6 * 6 >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}