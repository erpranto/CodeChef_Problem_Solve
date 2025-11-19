// https://www.codechef.com/problems/NO4S

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int c1 = 0, c2 = 0, c3 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                c1++;
            else if (v[i] == 2)
                c2++;
            else
                c3++;
        }
        int r13 = min(c1, c3);
        int r22 = max(0, c2 - 1);
        cout << r13 + r22 << nl;
    }
    return 0;
}