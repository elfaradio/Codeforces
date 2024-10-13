

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
int32_t main()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n), v1(t);
    for (int i = 0; i < n; i += 1)
    {
        cin >> v[i];
    }
    for (int i = 0; i < t; i += 1)
    {
        cin >> v1[i];
    }
    ll ans = -1;
    vector<ll> x;
    for (int i = 0; i < n; i += 1)
    {
        auto y = lower_bound(v1.begin(), v1.end(), v[i]) - v1.begin();
        // cout << x << endl;
        // cout << abs(v[i] - v1[x]) << endl;
        // ans = max(ans, abs(v[i] - v1[x - 1]));
        if (y == 0)
        {

            ans = max(ans, abs(v[i] - v1[0]));
        }
        else if (y == t)
        {

            ans = max(ans, abs(v[i] - v1[y - 1]));
        }
        else
        {
            // ashepasher duita check
            ll a = abs(v[i] - v1[y]);
            ll b = abs(v[i] - v1[y - 1]);

            ans = max(ans, min(a, b));
        }
    }
    cout << ans << endl;
}
