//https://www.codechef.com/START212C/problems/P7BAR

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
        vector<ll> a(n+1);
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        int cnt = 0, i = 1;
        while (i <= n)
        {
            cnt++;
            unordered_set<ll> st;
            st.insert(0);
            ll cur = 0;
            int j = i;
            while (j < n)
            {
                ll d = a[j + 1] ^ a[j];
                ll nxt = cur ^ d;
                if (st.count(nxt))
                {
                    break;
                }
                st.insert(nxt);
                cur = nxt;
                j++;
            }
            i = j + 1;
        }
        cout << cnt - 1 << nl;
    }
    return 0;
}