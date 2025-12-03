//https://www.codechef.com/problems/COMP4

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
    int n;
    cin >> n;
    if (n == 1)
        cout << 8000 << nl;
    else if (n == 2)
        cout << 4000 << nl;
    else if (n == 3)
        cout << 2000 << nl;
    else
        cout << 1000 << nl;
    return 0;
}