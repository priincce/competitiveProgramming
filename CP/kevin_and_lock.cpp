#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n;
   cin>>n;
   if(n%33==0)
   {
   	cout<<"YES"<<endl;
   }
   else
   {
   	cout<<"NO"<<endl;
   }
}
int main(){
   
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int tt =1;
   cin>>tt;
   while(tt--){solve();}
   return 0;
}