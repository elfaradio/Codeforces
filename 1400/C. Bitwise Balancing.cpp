 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
int32_t main()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll t;
    cin >> t;
    while (t--)
    {
        ll b, c, d;
        ll ok = false;
        ll ans = -1;
        cin >> b >> c >> d;
        ans = (d | b) - (d & c);
        if ((ans | b) - (ans & c) == d)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
