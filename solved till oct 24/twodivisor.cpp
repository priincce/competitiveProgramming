#include<bits/stdc++.h>
using lli=long long int;
using namespace std;
lli gcd(lli a, lli b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Function to return LCM of two numbers  
lli lcm(lli a, lli b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,c;
        cin>>a>>b;
        c=lcm(a,b);
        if(b>=c)
        {
            c*=(b/a);
        }
        cout<<c<<endl;
    }
    return 0;
}