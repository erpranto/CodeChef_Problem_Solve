// /https://www.codechef.com/problems/EXMLF1

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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        int car = 1, i = 0;
        float ans = 0;
        for (auto [d, t] : v)
        {
            i++;
            float x = (d / t * 1.0);
            if (x > ans)
            {
                ans = max(x, ans);
                car = i;
            }
        }
        cout << car << nl;
    }
    return 0;
}