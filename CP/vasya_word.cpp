#include<bits/stdc++.h>
using namespace std;
int main()
{     
  string s;
  cin>>s;
  int smal=0,cap=0;
  for(char c:s)
  {
      if(c>='A' and c<='Z')cap++;
      else smal++;
  }
  if(smal>=cap)
  {
      transform(s.begin(),s.end(),s.begin(),[](char c){ return std::tolower(c);});
  }
  else{
      transform(s.begin(),s.end(),s.begin(),[](char c){ return std::toupper(c);});
  }
  cout<<s<<endl;
  return 0;
}