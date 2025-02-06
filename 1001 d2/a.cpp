#include<bits/stdc++.h>
using namespace std;
int main()
{
      int tt = 1; 
      cin >> tt;
      while(tt--)
      {
            string s;
            cin >> s;
            cout<<count(s.begin(),s.end(),'1')<<endl;
      }
      return 0;
}