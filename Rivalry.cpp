#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r1, r2, d1, d2;
    cin >> r1 >> r2 >> d1 >> d2;
    int dif1 = r1 + d1;
    int dif2 = r2 + d2;
    if (dif1 > dif2)
        cout << "Dominater\n";
    else
        cout << "Everule\n";
    return 0;
}