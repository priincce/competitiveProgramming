#include <bits/stdc++.h>
using namespace std;

// void solve1(vector<int> &ans, vector<int> &arr, int index, int &val) {
   
    
 
// }

void solve() {
    int n,k, ans=1; 
    cin >> n;
    vector<int> v(n+1,0);
    
    for (int i = 1; i <=n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    int right = n;

    for(int i=n-1;i>=0;i--)
		{
			if(v[i+1]-v[i]>1){right=i;}
			while(v[right]-v[i]>=k){right--;}
			ans=max(ans,right-i+1);
		}
		cout<<ans<<endl;
}
// #include<bits/stdc++.h>
// using namespace std;
// int t,n,k;
// int a[200050];
// int main(){
// 	cin>>t;
// 	while(t--){
// 		cin>>n>>k;
// 		for(int i=1;i<=n;i++){
// 			cin>>a[i];
// 		}
// 		sort(a+1,a+n+1);
// 		int r=n;
// 		int ans=1;
// 		for(int i=n-1;i>=1;i--)
// 		{
// 			if(a[i+1]-a[i]>1)r=i;
// 			while(a[r]-a[i]>=k)r--;
// 			ans=max(ans,r-i+1);
// 		}
// 		cout<<ans<<endl;
// 	}
// }

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
