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
        int n, a, b;
        cin >> n >> a >> b;
        priority_queue<int, vector<int>, greater<int>> pq;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            int dis = abs(a - x) + abs(b - y);
            pq.push(dis);
        }
        cout << pq.top() << "\n";
    }
    return 0;
}