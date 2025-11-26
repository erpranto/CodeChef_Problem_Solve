// https://www.codechef.com/START209D/problems/P5209

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
        string s;
        cin >> s;
        int c01 = 0, c10 = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == '0' && s[i] == '1')
                c01++;
            if (s[i - 1] == '1' && s[i] == '0')
                c10++;
        }
        if (c01 == c10 && c01 > 0)
            cout << "Alice\n";
        else if (c01 == 0 || c10 == 0)
            cout << "Bob\n";
        else
        {
            cout << "Alice\n";
        }
    }
    return 0;
}