#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   deque<int>d;
   for(int i=0;i<n;i++)
{
   int j;
   cin>>j;
   d.push_back(j);
}
 if(d.size()<3)
 {
    cout<<d.front()<<endl;
 }
 else{
     while(d.size()!=3&&d.size()>3)
{
   int x=d.front();
   d.pop_front();
   int y=d.back();
   d.pop_back();
if(x>y&&x>d.front()||d.back()>y&&d.back()>d.front())
{ d.push_front(x);
  d.pop_back();
}
else{
  d.push_back(y);
   d.pop_front();
}}
cout<<max(d.front(),d.back())<<endl;
 }
}
int main()
{ int t;
cin>>t;
while(t--){
solve();}
return 0;
}