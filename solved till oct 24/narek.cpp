#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,m,q,t1,t2,d;
    cin>>n>>m>>q>>t1>>t2>>d;
    if(d>t1 and d>t2)
    {
         cout<<abs(max(t1,t2)-n)<<endl;
    }
    else if(d<t1 and d<t2)
    {
        cout<<abs(min(t1,t2)-1)<<endl;
    }
    else{
        cout<<abs(t2-t1)/2<<endl;
    }
    
   
}
int main()
{
    long long int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}