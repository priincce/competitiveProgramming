#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template<typename T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define endl '\n'
#define sz(a) (int)a.size()
#define setbits(x) __builtin_popcountll(x)
#define ff first
#define ss second
#define conts continue
#define ceil2(x,y) ((x+y-1)/(y))
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

#define rep(i,n) for(int i = 0; i < n; ++i)
#define rep1(i,n) for(int i = 1; i <= n; ++i)
#define rev(i,s,e) for(int i = s; i >= e; --i)
#define trav(i,a) for(auto &i : a)

template<typename T>
void amin(T &a, T b) {
    a = min(a,b);
}

template<typename T>
void amax(T &a, T b) {
    a = max(a,b);
}

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

/*



*/

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;
const int inf1 = int(1e9) + 5;
const ll inf2 = ll(1e18) + 5;

void solve(int test_case){
    ll n,k; cin >> n >> k;
    vector<ll> a(n+5);
    rep1(i,n) cin >> a[i];

    ll tot = 1, both_ways = 1, pal_ways = 1;
    rep1(i,n/2){
        ll j = n-i+1;
        ll x = (a[i]!=0), y = (a[j]!=0);
        if(x+y == 0){
            both_ways = both_ways*k%MOD*k%MOD;
            pal_ways = pal_ways*k%MOD;
            tot = tot*k%MOD*k%MOD;
        }
        else if(x+y == 1){
            tot = tot*k%MOD;
        }
        else{
            if(a[i] != a[j]){
                both_ways = pal_ways = 0;
            }
        }
    }

    if(n&1){
        if(a[ceil2(n,2)] == 0){
            tot = tot*k%MOD;
            both_ways = both_ways*k%MOD;
            pal_ways = pal_ways*k%MOD;
        }
    }

    ll sub = (both_ways-pal_ways+MOD)*((MOD+1)/2)%MOD;
    ll ans = (tot-sub+MOD)%MOD;
    cout << ans << endl;
}

int main()
{
    fastio;

    int t = 1;
    cin >> t;

    rep1(i, t) {
        solve(i);
    }

    return 0;
}