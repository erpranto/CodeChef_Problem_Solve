//https://www.codechef.com/START209D/problems/P3209

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
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                v.push_back(i);
        }
        sort(v.rbegin(), v.rend());
        for (auto x : v)
        {
            for (int i = x; i <= n; i += x)
            {
                if (__gcd(i, n) == x)
                {
                    cout << i << " ";
                }
            }
        }
        cout << nl;
    }
    return 0;
}