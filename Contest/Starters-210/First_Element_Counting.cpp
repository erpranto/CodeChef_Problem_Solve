//https://www.codechef.com/problems/FIRSTCNT


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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 1; i <= n; i++)
            cin >> v[i];
        vector<pair<ll, ll>> a;
        for (int i = 1; i <= n; i++)
            a.push_back({v[i], i});
        sort(all(a));
        vector<ll> ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            ll idx = a[i].second;
            if (i == 0 || i == n - 1)
            {
                ans[idx] = -1;
            }
            else{
                ll lmf=(a[i-1].first+a[i].first)/2;
                ll rmf=(a[i].first+a[i+1].second)/2;
                ll l=lmf+1;
                ll r=rmf;

            }
        }
    }
    return 0;
}