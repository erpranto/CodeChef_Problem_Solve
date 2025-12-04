//https://www.codechef.com/problems/MAKESUB

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        string s;
        cin >> s;
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && l == -1)
            {
                l = i;
            }
            else if (s[i] == '1' && l != -1)
            {
                r = i;
            }
        }
        int cnt = 0;
        for (int i = l; i < r; i++)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}