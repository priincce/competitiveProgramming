#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>a;
if (n==1)
{
    cout<<a[0]<<endl;
}
else{
for(int i=0,j;i<n;i++)
{
    cin>>j;
    a.push_back(j);
}
for(int i=0;i<n-1;i++)
{
    if(i%2==0)
    {
        a[i]=a[i+1]=max(a[i],a[i+1]);
    }
    else{
        a[i]=a[i+1]=min(a[i],a[i+1]);
    }
}

cout<<a[n-1]<<endl;}
}
int main()
{
 int t;
cin>>t;
while(t--){
solve();}
return 0;
}