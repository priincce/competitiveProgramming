#include<bits/stdc++.h>
using namespace std;
void solve()
{
      string s;
      cin>>s;
      string wub="WUB";
      size_t pos;
      while ((pos = s.find(wub)) != string::npos) { 
            s.replace(pos, wub.length(), " "); 
      
      }
      while (!s.empty() && s.front() == ' ') s.erase(0, 1);
      while (!s.empty() && s.back() == ' ') s.pop_back();
      cout<<s<<endl;
}
int main()
{
      
      solve();
      return 0;
}