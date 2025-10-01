#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int time = n * k;
        int hr=0;
        if (time >= 60)
        {
            hr = time / 60;
            time = time % 60;
        }
        cout << hr << " " << time << endl;
    }
    return 0;
}