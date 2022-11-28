#include <bits/stdc++.h>
// For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))
#define loop(i, a, b) for (auto i = a; i < b; i++)
#define loopr(i, a, b) for (auto i = a; i >= b; i--)
#define loops(i, a, b, step) for (auto i = a; i < b; i += step)
#define looprs(i, a, b, step) for (auto i = a; i >= b; i -= step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);
#define all(a) a.begin(), a.end()
#define sortall(a) sort(all(a))
#define rev(a) reverse(all(a))
#define sz(a) a.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ct cout <<
#define ci cin >>
int mod = 998244353;
using namespace std;
// For ordered_set
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// void solve()
// {
//     yes;
// }

int main()
{
    FAST;
    string a, b;
    ci a >> b;
    ST<int> s;
    int cnt = 0;

    if (a.size() != b.size())
        no;

    else
    {

        for (auto i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                cnt++;
                s.insert(a[i]);
                s.insert(b[i]);
            }
        }

        if (cnt == 2 and s.size() == 2)
            yes;
        else
            no;
    }

    return 0;
}