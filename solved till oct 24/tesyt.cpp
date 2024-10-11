// Standard libraries
#include <bits/stdc++.h>
using namespace std;

// Debugging macro
#ifndef ONLINE_JUDGE
    #define dbg(x) cerr << #x << " = " << (x) << endl
#else
    #define dbg(x)
#endif


const int INF = INT_MAX; 
const long long LINF = LLONG_MAX;
const int MOD = 1e9 + 7; 
const double EPS = 1e-9; 

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;


template<typename T>
void read(T &x) {
    cin >> x;
}

template<typename T1, typename T2>
void read(pair<T1, T2> &p) {
    cin >> p.first >> p.second;
}

template<typename T>
void write(const T &x) {
    cout << x << endl;
}

template<typename T1, typename T2>
void write(const pair<T1, T2> &p) {
    cout << p.first << " " << p.second << endl;
}


void solve() {
    int n;
    read(n);
    vi arr(n);
    for(int &x : arr) read(x);


    for (const int &x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    
    return 0;
}
