#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	long long maxi=*max_element(a,a+n);
	
	if(maxi>=2*n){
		unordered_map<long long,int>mp;
		for(int i=0;i<n;i++)
            {
                  mp[a[i]]++;
            }

		long long sol=0;
		for(auto val:mp)
            {
                  sol=max(sol,val.second+val.first);
            }
		cout<<sol<<endl;
		return;
	}
	
	unordered_map<long long,int>mp1;
	for(int i=0;i<n;i++)
      {
            mp1[a[i]]++;
      }
	n<<=1;
	
	unordered_map<long long,int>mp;
	for(int i=2;i<=n;i++){
		for(int j=i;j<=n;j+=i){
			if(mp1.find(j)!=mp1.end())
                  {
                        mp[i]+=mp1[j];
                  }	
		}
	}
	
	maxi=(n>>1)+1;
	for(auto val:mp)
      {
            maxi=max(maxi,val.first+val.second);
      }
	cout<<maxi<<endl;
}

int main() {
	
	int n=1;
	cin>>n;
	while(n--) {
		solve();
	}
	return 0;
}
