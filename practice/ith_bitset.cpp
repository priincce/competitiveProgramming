#include<bits/stdc++.h>
using namespace std;
bool bitSett(int num, int k)
{
      bitset<32> bin(num);
     for(int i=0; i<32;i++)
      {
          if(bin.test(i) and i==k)
           {
            return true;
           }
      }
      return false;
}

void solve()
{
     int a,b;
     cin >> a >> b;
     bitSett(a,b)?cout<<"SET":cout<<"NOT SET";cout<<endl;

}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int t=1;
      //uncomment if multiple test cases
      // cin >> t; 
      while(t--)
      {
            solve();
      }
      return 0;
}