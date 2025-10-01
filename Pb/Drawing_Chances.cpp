#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;

        int a = 0, b = 0;
        for (char c : S)
        {
            if (c == '1')
                a++;
            else
                b++;
        }
        int rem = N - M;
        int diff = b - a;
        int num = diff + rem;
        if (num % 2 == 0)
        {
            int x = num / 2;
            if (x >= 0 && x <= rem)
            {
                cout << "Yes\n";
                continue;
            }
        }
        cout << "No\n";
    }
    return 0;
}