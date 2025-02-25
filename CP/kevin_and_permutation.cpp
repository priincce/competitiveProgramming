#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k;
   cin>>n>>k;
   int x=0;
   vector<int>v(n,-1);
   for(int i=k-1;i<n;i+=k)
   {
        v[i]=++x;
   }
     for(int i=0;i<n;i++)
   {
        if(v[i]==-1){
         v[i]=++x;
        }
        cout<<v[i]<<" \n"[i == n - 1];
      
   }
}
int main(){
   std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
   int tt =1;
   cin>>tt;
   while(tt--){solve();}
   return 0;
}