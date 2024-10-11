#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int  value ,mux =0;
    cin >> value;
    unordered_map<int,int>m;

    for(int i = 0,j; i < value;i++)
    {
        cin >>j;
        m[j]++;
       mux= max(mux,j);
    }
  vector<pair<int,int>>v;
  for(auto i:m)
  {
    v.push_back({i.first,i.second});
  }
  sort(v.begin(),v.end(),[](const std::pair<int,int>& a, const std::pair<int,int>& b) {
        return a.first < b.first;});
//    for(auto i:v)
//    {
//     cout<<i.first<<" "<<i.second<<endl;
//    }
int t=v.size();
bool flag=false;
   for(int i=t-1;i>=0;i--)
   {
    if(v[i].second%2!=0)
    {
        flag=true;
        break;
    }
   }
   if(flag)
   {
    cout<<"yes\n";
   }
   else{
    cout<<"no\n";
   }
 
}
int main()
{
    int querry;
    cin >> querry;
    while ( querry--)
    {
        solve();
    }
    return 0;
}