#include <bits/stdc++.h>
using namespace std;
#define endl  "\n"
// #define int long long int
#define N 400001
int l[N],r[N],sum[N],cnt[N];
void solve()
{
		int n;
		cin >> n;
		for (int i = 1; i <= 2 * n; ++i) sum[i] = cnt[i] = 0;
		for(int i=1; i<=n; i++)
		{
			cin>>l[i]>>r[i];
			if(l[i]==r[i]) sum[l[i]]=1; ++cnt[l[i]];
		}
		for(int i =2; i<=2*n;i++)sum[i]+=sum[i-1];
		for(int i=1; i<=n;i++)
		{
			cout << ((l[i] == r[i] ? cnt[l[i]] <= 1 : sum[r[i]] - sum[l[i] - 1] < r[i] - l[i] + 1) ? "1" : "0");
		}
		cout<<endl;
}
int main() {
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
