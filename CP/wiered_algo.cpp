#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
      int n;
      cin>>n;
      while(n!=1)
      {
            cout<<n<<" ";
            if(n&1)
            {
                  n*=3;
                  n+=1;
            }
            else{
                  n/=2;
            }
      }
      cout<<n<<endl;
      return 0;
}