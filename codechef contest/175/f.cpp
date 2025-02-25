#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector a(n + 1, 0ll);
    for (int i = 1; i <= n; ++i) cin >> a[i];
       
    sort(a.begin() + 1, a.end());
    int ans = a[n];


    for (int i = n; i >= 1; --i)
        if (a[i] == a[n])
            ans++;


    int candidate = max(1ll, a[n] - (n - 1) - 3);
    map<int, int> occ;
    for (int i = 1; i <= n; ++i)
    if(a[n] - a[i] <= n + 2)
        occ[a[i]]++;
        
    auto check = [&](int x)
    {
        int cnt = 0;
        if (x == 1)
            return n + x;
        else if (x == 2)
        {
            for (auto &[x, y] : occ)
                if (x % 2 == 0)
                    cnt += y;
            return cnt + x;
        }
        for (int i = 1;; ++i)
            if (i * x > a[n])
                break;
            else
                cnt += occ[i * x];
        return (long long)cnt + x;
    };

    for (int i = candidate; i <= a[n]; ++i)
    {
        ans = max(check(i), ans);
    }
    cout << ans << "\n";
}

signed main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}