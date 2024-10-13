

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
    vector<ll> v(n);
    for (int i = 0; i < n; i += 1)
    {
        cin >> v[i];
    }
    ll l = 0, r = n;
    ll s = 0;
    // sort(v.begin(), v.end());
    ll ans = -1;
    for (int i = 0; i < n; i += 1)
    {
        s += v[i];
        while (s > t)// sliding window
        {
            s -= v[l++];
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans << endl;
}
