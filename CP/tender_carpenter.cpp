#include <bits/stdc++.h>
using namespace std;
#define endl  "\n"
#define int long long int

void solve()
{
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& a : arr) cin >> a;
		bool ans = false;
		for (int i = 1; i < n; i++) {
			int x = arr[i-1], y = arr[i];
			if (2*x > y && 2*y > x){
				ans = true;
			}
		}
		cout << (ans ? "YES" : "NO") << endl;
}
int32_t main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef SPOJ
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
	int tt=1; cin >> tt;
	while (tt--) {
		solve();
	}
	return 0;
}
