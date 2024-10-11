#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
  char a,b,c;
  vector<int>v={8,8,8};
  cin>>a>>b>>c;
  if(a=='>') v[0]+=2;else v[1]+=2;
  if(b=='>') v[0]+=2; else v[2]+=2;
  if(c=='>') v[1]+=2;else v[2]+=2;
  int max1=max(v[0],max(v[1],v[2]));
  int min1=min(v[0],min(v[1],v[2]));
  int sum=v[0]+v[1]+v[2];
  if((sum-(min1+max1))==v[0]) {cout<<'A'<<endl;}
  else if((sum-(min1+max1))==v[1]){ cout<<'B'<<endl;}
  else{ cout<<'C'<<endl;}
  
}
int main()
{
  solve();
  return 0;
}