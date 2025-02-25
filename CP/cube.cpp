#include<iostream>
#include<cstdint>
using namespace std;
#define int long long int
void solve()
{
	int n;
	cin >> n;
	if(n>=2)
	{
		cout<< n-1<<endl;
	}
	else{
		cout<< 0<<endl;
	}
}
int32_t main()
{
	
	int tt=1;
	cin>> tt;
	while(tt--)
	{
		solve();
	}
	return 0;
}