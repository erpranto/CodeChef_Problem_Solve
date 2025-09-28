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
        int a, b, c;
        cin >> a >> b >> c;
        float avg = (a + b) / 2.0;
        if (avg > c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}