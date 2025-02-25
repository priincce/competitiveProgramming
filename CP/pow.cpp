#include<bits/stdc++.h>

using namespace std;
typedef long long int lint;




lint powr(int a, int b)
{
      lint res = 1;
      while(b>0)
      {
            if(b&1)
            {
                  res = (res*a);
            }
            a *= a;
            b >>= 1;
      }
      return res;
      
}

string solve(int A, int B, int C) {
  if (C == 0) return "="; // Any number to the power of 0 is 1 (excluding 0^0).

    if (C % 2 == 0) {
        if (abs(A) > abs(B)) return ">";
        else if (abs(A) < abs(B)) return "<";
        else return "=";
    } else { // Odd power: consider signs
        if (A > B) return ">";
        else if (A < B) return "<";
        else return "=";
    }
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int tt=1;
      cin>>tt;
      while(tt--)
      {
            int A, B, C;
            cin >> A >> B >> C;
            cout<<solve(A, B, C)<<endl;
      }
}