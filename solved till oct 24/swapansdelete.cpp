#include<bits/stdc++.h>
using lli=long long int;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

 string s;
    cin>>s;
    string t=s;
    int a[2]={0,0};
    lli n=(lli)s.size(),cnt=0;
    for(lli i=0;i<n;i++)
    {
        a[s[i]-'0']++;
    }
    for(lli i=0;i<n;i++)
    {if(a[!(s[i]-'0')]>0)
    {
        a[!(s[i]-'0')]--;
    }
        else{
            cnt=n-i;
            break;
        }
    }
 
    cout<<cnt<<endl;
    }
   return 0;
}