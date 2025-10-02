#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                cnt1++;
            else if (v[i] == 2)
                cnt2++;
            else if (v[i] == 3)
                cnt3++;
        }
        ll ans = 0;
        ans += cnt1 * (cnt1 - 1) / 2;

        ans += cnt1 * cnt2;

        ans += cnt2 * cnt3;

        cout << ans << "\n";
    }
    return 0;
}