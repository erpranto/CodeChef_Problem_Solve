//https://www.codechef.com/problems/SBTG

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < k; i++)
        {
            v[i] = 0;
            x += 100;
        }
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > x)
                r++;
        }
        cout << r+1 << nl;
    }
    return 0;
}