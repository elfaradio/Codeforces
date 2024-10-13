

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
int32_t main()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll n, s;
    cin >> n >> s;
    ll l = 0;
    ll ans = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i += 1)
    {
        cin >> v[i];
    }
    ll ns = 0;
    for (int i = 0; i < n; i += 1)
    {
        ns += v[i];
        while (ns >= s)
        {
            ns -= v[l];
            l++;
        }
        ans += l;
    }
    cout << ans << endl;
}
