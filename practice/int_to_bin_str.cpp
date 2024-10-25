#include<bits/stdc++.h>
using namespace std;
string Bin_str(int num)
{
      string res="";
      while(num>0){
            res = (num & 1)?"1"+res:"0"+res;
            num>>=1;
      }
    return res="0"+res;
}

// string Bin_str(int num) {
//     if (num == 0) return "0";  // Handle the case for zero

//    :string binary = "";
//     bool started = false;  // Flag to indicate if we've started adding digits

//     for (int i = 31; i >= 0; --i) {
//         if (num & (1 << i)) {
//             binary += "1";
//             started = true;  // Start adding digits after the first '1'
//         } else if (started) {  // Only add '0's after the first '1' has been added
//             binary += "0";
//         }
//     }

//     return binary;
// }

// string Bin_fast(int num)
// {
//       bitset<32> bin(num);
//       string binary = bin.to_string();
//       return binary;
// }


void solve()
{
      int num=0;
      cin >> num;
      string ans= Bin_str(abs(1-num)) ;
      cout <<ans << endl;
}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int t=1;
      //uncomment if multiple test cases
      cin >> t; 
      while(t--)
      {
            solve();
      }
      return 0;
}