#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
 cin>>t;
 int cnt=0;
 while(t--)
 {
   int a,b,c;
   cin>>a>>b>>c;
  if(a+b+c>=2)
  {
    cnt++;
  }
 }
 cout<<cnt<<endl;
  return 0;  
}