#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int val =arr[0], val2 = arr[1],ans=0;
    int maxi =*max_element(arr.begin(),arr.end());
    if(maxi>val and maxi>val2)
    {
            if(val>val2)
            {
                  ans=(maxi-val)+(val-val2-1)/2;
            }
            else{
                  ans=val+(val2-val-1)/2;
            }
      }
      else{
            if(val>val2)
            {
                  ans=(N-val)+(val-val2-1)/2;
            }
            else{
                  ans=val+(val2-val-1)/2;
            }
    }
    cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;

}
