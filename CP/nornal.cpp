#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void solve()
{
      string s;
      cin >> s;
      reverse(s.begin(),s.end());
      for(int i =0;i<s.size();i++)
      {
            if(s[i]=='p')s[i]='q';
            else if(s[i]=='q')s[i]='p';
      }
      cout << s << endl;
}
int main()
{
      int tt;
      cin >> tt;
      while(tt--)
      {
            solve();
      }
      return 0;
}