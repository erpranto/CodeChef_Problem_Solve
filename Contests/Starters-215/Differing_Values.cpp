//https://www.codechef.com/problems/DIFFVAL

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt1 = 0;
        for (auto c : s)
        {
            if (c == '1')
                cnt1++;
        }
        int min1 = 0, max1 = 0;
        int len1 = n / k + 1, len2 = n / k;

        int extra = n % k;
        min1 += extra * (len1 / 2);
        min1 += (k - extra) * (len2 / 2);
        max1 += extra * ((len1 + 1) / 2);
        max1 += (k - extra) * ((len2 + 1) / 2);

        if (cnt1 >= min1 && cnt1 <= max1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}