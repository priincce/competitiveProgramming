#include<bits/stdc++.h>


// product of binary decimals brute force
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
       vector<long long>v;
       v.push_back(10);
       v.push_back(11);
       long long i=0;
       while(true)
       {
        if(i>=v.size()) break;
        long long x=v[i]*10;
        long long y=x+1;
        if(x<=n)
        {
            v.push_back(x);
        }
        if(y<=n)
        {
            v.push_back(y);
        }
        i++;
       }
       reverse(v.begin(),v.end());
        while(n>1)
 {
    bool ok=false;
    for (int i=0;i<v.size();i++)
    {
        if(n%v[i]==0)
        {
            n/=v[i];
            ok=true;
        }
    }
    if(!ok)
    {
        break;
    }
 }
 if (n==1)
 {
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
    }
 
 return 0;
 
}