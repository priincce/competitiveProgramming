#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,cnt=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    { 
       for(int j=i+1;j<=b;j++)
       {
          if(__gcd(i,j)==1){
            for(int k=j+1;k<=b;k++)
            {
                if(__gcd(j,k)==1 and __gcd(k,i)==1)
                {
                    cnt++;
                    
                }
            }
          }
       }
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
