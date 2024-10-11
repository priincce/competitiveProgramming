#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,ans=0;
       cin>>n>>m; 
	   for(int i=1;i<=m;i++)
       {
        ans+=(n+i)/(1ll*i*i);
       }
       cout<<ans-1<<'\n';
    }
	return 0;
}
