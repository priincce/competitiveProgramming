#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if (b==0)return a;
    return gcd(b,a%b);
}

void solve()
{
	int m,n;
	cin>>m>>n;
	(m>n)?cout<<gcd(m,n)<<endl:cout<<gcd(n,m)<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int tt =1;
	cin>> tt;
	while(tt--)
	{
		solve();
	}
	return 0;
}