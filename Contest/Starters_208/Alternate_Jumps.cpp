//https://www.codechef.com/problems/ALJMP

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
        int n;
        cin >> n;
        int cur = n;
        for (int i = 1; i <= n - 1; i++)
        {
            if (i % 2 != 0)
            {
                cur -= (n - i);
            }
            else
                cur += (n - i);
        }
        cout << cur << nl;
    }
    return 0;
}