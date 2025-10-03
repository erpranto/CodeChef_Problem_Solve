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
        long long N;
        cin >> N;
        long long minimum = (N >= 2) ? (N - 2) : 0;
        long long maximum = (N >= 2) ? ((N - 1) * (N - 2) / 2) : 0;
        cout << minimum << " " << maximum << "\n";
    }
    return 0;
}