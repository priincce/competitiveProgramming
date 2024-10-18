#include<bits/stdc++.h>
using namespace std;


int binaryToInt(string& binaryStr) {
    bitset<32> bin(binaryStr);
    return bin.to_ulong();
}



void solve()
{
      string num;
      cin >> num;
      
      cout<<binaryToInt(num)<<endl;
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