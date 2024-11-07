/**
 *  I AM WHAT YOU MADE ME---->>>>Darth Vader
 *
 *  Farhadul Islam
 *  CSE 56,IIUC
 **/

  // The more we deny that we have a dark side, the more power it has over us


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;typedef vector<int> vi;typedef vector<ll> vl;typedef vector<vi> vvi;typedef vector<vl> vvl;typedef pair<int, int> pii;
typedef pair<double, double> pdd;typedef pair<ll, ll> pll;typedef vector<pii> vii;typedef vector<pll> vll;typedef double dl;
typedef map<ll, ll> mll;

#define lb lower_bound #define ub upper_bound
#define be begin()
#define sp " "
#define str string
#define en end()
#define um unordered_map
#define us unordered_set
#define dosh(n) fixed << setprecision(n)
#define LOKI() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define yn cout << "YES" << endl; else cout << "NO" << endl;
#define om cout << "-1" << endl
#define pb push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define shit() return

const ll mx = 1e8 + 128;
const double PI = 2.0 * acos(0.0);const long double pi = 3.141592653589793238;const double EPS = 1e-9;const ll inf = 2000000000;const ll INF = 9000000000000000000;

#define mod 1000000007
#define maxi LLONG_MAX
#define vin(v,n)  vl v ;for(int i=0;i<n;i++){ll x;cin>>x;v.pb(x);};
#define vp(v) for(auto c:v){cout<<c<<sp;}
bool isvalid(ll i, ll j, ll n, ll m) { return i >= 0 && i < n && j >= 0 && j < m; }
void SieveOfEratosthenes(int n) { vector<bool> prime(n + 1, true); for (int p = 2; p * p <= n; p++) if (prime[p]) for (int i = p * p; i <= n; i += p) prime[i] = false; for (int p = 2; p <= n; p++) if (prime[p]) cout << p << " "; }
bool dcmp(double x, double y) { return abs(x - y) < 1e-12; }
ll cei(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
bool cmp(pll& a, pll& b) { return a.first < b.first || (a.first == b.first && a.second > b.second); }
bool isPrime(ll n) { if (n <= 1) return false; for (ll i = 2; i * i <= n; i++) if (n % i == 0) return false; return true; }
ll pwr(ll a, ll b) { ll res = 1; while (b > 0) { if (b & 1) res *= a; a *= a; b >>= 1; } return res; }
void subset(vl v, ll n) { for (int i = 1; i < pwr(2, n); i++) { for (int j = 0; j < n; j++) if (i & (1 << j)) cout << v[j] << " "; cout << endl; } }
unsigned long long fact(ll num) { unsigned long long result = 1; for (int i = 2; i <= num; i++) result *= i; return result; }
void sub_arr_sum(vl v, ll n) { ll s = 0; for (int i = 0; i < n; i++) s += v[i] * (n - i) * (i + 1); }
vl rotatee(vl &v, ll i) { rotate(v.begin(), v.begin() + i, v.end()); return v; }
ll ncr(ll n, ll r) { ll m1 = 1, m2 = 1; for (ll i = r; i >= 1; i--) { ll x = gcd(m1, m2); m1 *= n--; m2 *= i; m1 /= x; m2 /= x; } return m1 / m2; }
void _2darray_to_1d() { vector<vector<int>> mat; vector<int> v; for (auto r : mat) for (auto c : r) v.push_back(c); int r = 2, c = 3; vector<vector<int>> ans(r, vector<int>(c)); for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) ans[i][j] = v[i * c + j]; }
unsigned hp2(unsigned N) { return !(N & (N - 1)) ? N : 0x8000000000000000 >> (__builtin_clzll(N)); }
ll ndiv(ll num) {/*ll v[n + 1] = {0}; for (ll i = 1; i <= n; i++) for (ll j = i; j <= n; j += i) v[j]++;*/ ll tt = 1; for (ll i = 2; i * i <= num; i++) if (num % i == 0) { ll e = 0; do { e++; num /= i; } while (num % i == 0); tt *= e + 1; } if (num > 1) tt *= 2; return tt; }

const ll MOD = 1e9 + 7;
vector<vector<ll>> divisors(1e6 + 28);
vector<ll> spf(mx+ 1, 1);
template <const ll md>
struct TIE_Advanced_x1 {
    ll man;
    constexpr TIE_Advanced_x1(long long x = 0) : man((x % md + md) % md) {}
    explicit operator ll() const { return man; }
    TIE_Advanced_x1 &operator+=(const TIE_Advanced_x1 &b) { man += b.man; man -= md * (man >= md); return *this; }
    TIE_Advanced_x1 &operator-=(const TIE_Advanced_x1 &b) { man -= b.man; man += md * (man < 0); return *this; }
    TIE_Advanced_x1 &operator*=(const TIE_Advanced_x1 &b) { man = 1ll * man * b.man % md; return *this; }
    TIE_Advanced_x1 &operator/=(const TIE_Advanced_x1 &b) { return *this *= b.inverse(); }
    TIE_Advanced_x1 inverse() const { ll x = 1, y = 0, t; for (ll a = man, b = md; b; swap(a, b), swap(x, y)) { t = a / b; a -= t * b; x -= t * y; } return TIE_Advanced_x1(x); }
    TIE_Advanced_x1 power(ll b) const { TIE_Advanced_x1 a = *this, ANS(1); for (; b; a *= a, b /= 2) if (b & 1) ANS *= a; return ANS; }
    TIE_Advanced_x1 operator-() const { return man == 0 ? 0 : md - man; }
    TIE_Advanced_x1 &operator++() { man = man == md - 1 ? 0 : man + 1; return *this; }
    TIE_Advanced_x1 &operator--() { man = man == 0 ? md - 1 : man - 1; return *this; }
    TIE_Advanced_x1 operator++(int32_t) { TIE_Advanced_x1 before = *this; ++*this; return before; }
    TIE_Advanced_x1 operator--(int32_t) { TIE_Advanced_x1 before = *this; --*this; return before; }
    friend TIE_Advanced_x1 operator+(const TIE_Advanced_x1 &a, const TIE_Advanced_x1 &b) { return TIE_Advanced_x1(a) += b; }
    friend TIE_Advanced_x1 operator-(const TIE_Advanced_x1 &a, const TIE_Advanced_x1 &b) { return TIE_Advanced_x1(a) -= b; }
    friend TIE_Advanced_x1 operator*(const TIE_Advanced_x1 &a, const TIE_Advanced_x1 &b) { return TIE_Advanced_x1(a) *= b; }
    friend TIE_Advanced_x1 operator/(const TIE_Advanced_x1 &a, const TIE_Advanced_x1 &b) { return TIE_Advanced_x1(a) /= b; }
    friend bool operator==(const TIE_Advanced_x1 &a, const TIE_Advanced_x1 &b) { return a.man == b.man; }
    friend bool operator!=(const TIE_Advanced_x1 &a, const TIE_Advanced_x1 &b) { return a.man != b.man; }
    friend bool operator<(const TIE_Advanced_x1 &a, const TIE_Advanced_x1 &b) { return a.man < b.man; }
    friend ostream &operator<<(ostream &os, const TIE_Advanced_x1 &a) { return os << a.man; }
    friend istream &operator>>(istream &in, TIE_Advanced_x1 &a) { return in >> a.man; }
    static const ll mx = 1e6 + 5;
    static TIE_Advanced_x1<md> FACTORIAL[mx];
    static void hectorials() { FACTORIAL[0] = 1; for (ll i = 1; i < mx; i++) FACTORIAL[i] = FACTORIAL[i - 1] * TIE_Advanced_x1<md>(i); }
    static TIE_Advanced_x1<md> NCR(ll n, ll r) { return r < 0 or r > n ? TIE_Advanced_x1<md>(0) : FACTORIAL[n] / (FACTORIAL[r] * FACTORIAL[n - r]); }
    // Tatooine::hectorials();
       // cout<<Tatooine::NCR(10,5)<<endl;
         
    //cout<<Tatooine::FACTORIAL[5]<<endl;
};

template <const ll md>
TIE_Advanced_x1<md> TIE_Advanced_x1<md>::FACTORIAL[TIE_Advanced_x1<md>::mx];
using Tatooine = TIE_Advanced_x1<MOD>;


template <typename F, typename S> ostream &operator<<(ostream &os, const pair<F, S> &p) { return os << "(" << p.first << ", " << p.second << ")"; }
template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) { os << "{"; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "}"; }
template <typename T> ostream &operator<<(ostream &os, const set<T> &v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "]"; }
template <typename T> ostream &operator<<(ostream &os, const multiset<T> &v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "]"; }
template <typename F, typename S> ostream &operator<<(ostream &os, const map<F, S> &v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << it->first << " = " << it->second; } return os << "]"; }

#define dbg(args...) do { cerr << #args << " : "; farhaidda(args); } while (0)

void farhaidda() { cerr << endl; }
template <typename T> void farhaidda(T a[], int n) { for (int i = 0; i < n; i++) cerr << a[i] << ' '; cerr << endl; }
template <typename T, typename... hello> void farhaidda(T arg, const hello&... rest) { cerr << arg << ' '; farhaidda(rest...); }
bitset<mx> isPrime2; vector<ll> primes;ll phi[mx];//co-prime sum=phi[n]*n; sum/=2; gcd(A,N)=d, is ϕ(N/d).

void primeGen(ll n) { for (ll i = 3; i <= n; i += 2) isPrime2[i] = 1; ll sq = sqrt(n); for (ll i = 3; i <= sq; i += 2) if (isPrime2[i]) for (ll j = i * i; j <= n; j += i) isPrime2[j] = 0; isPrime2[2] = 1; primes.push_back(2); for (ll i = 3; i <= n; i += 2) if (isPrime2[i]) primes.push_back(i); }
ll PHI(ll n) { if (n == 0) return 0; if (n == 1) return 1; ll FHI = n; for (auto p : primes) { if (1LL * p * p > n) break; if (n % p == 0) { while (n % p == 0) n /= p; FHI = FHI / p * (p - 1); } } return n > 1 ? FHI / n * (n - 1) : FHI; }
void totient(ll lim){ for (ll i = 1; i <= lim; i++) phi[i] = i; for (auto p : primes) for (ll j = p; j <= lim; j += p) phi[j] = phi[j] * (p - 1) / p;}
ll SOD(ll n) { ll ANS = 1; for (auto p : primes) { if (1LL * p * p > n) break; if (n % p == 0) { ll sum = 1, A = 1; while (n % p == 0) { A *= p, sum += A, n /= p; } ANS *= sum; } } return n > 1 ? ANS * (n + 1) : ANS; }
ll SNOD(ll n) { ll ANS = 0, u = sqrt(n); for (ll i = 1; i <= u; i++) ANS += (n / i) - i; return (ANS * 2) + u; }
void computediv(ll n) { for (ll i = 1; i <= n; i++) for (ll j = i; j <= n; j += i) divisors[j].push_back(i); }
void SPF(ll lim) { spf[0] = 0; for (ll i = 2; i <= lim; i++) if (spf[i] == 1) for (ll j = i; j <= lim; j += i) if (spf[j] == 1) spf[j] = i; }
vector<ll> sfact(ll x) { vector<ll> ANS; while (x != 1) ANS.push_back(spf[x]), x /= spf[x]; return ANS;/*while (n % 2 == 0) cout << 2 << " ", n >>= 1; for (ll i = 3; i <= sqrt(n); i += 2) while (n % i == 0) cout << i << " ", n /= i; if (n > 2) cout << n << " ";*/ }
ll msb(ll number) {/**/ll ANS = 0; while (number >>= 1) ANS++; return ANS; }
void tri() { unsigned int x = 18; std::cout << __builtin_clz(x) << ' ' << __builtin_ctz(x) << ' ' << __builtin_popcount(x) << ' ' << __builtin_ffs(x) << ' ' << __builtin_parity(x) << '\n'; }




void Shinzo_wo_Sasageyo()
{
     // By Farhadul Islam  
     // Only Brute Force Bhai
      
          
}

int32_t main()
{
    LOKI();
    int t = 1;
   // cin >> t;
    while (t--)
    {
        Shinzo_wo_Sasageyo();
    }

    return 0;
}
