#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
     string x=s;

    sort(s.begin(),s.end());
    string r=s;
    reverse(r.begin(),r.end());
    int l=s.size()-1;
       if(s[0]==s[l])
     {
        cout<<"NO\n";
     }
     else{
        cout<<"YES\n";
        if(s==x)
        {
            cout<<r<<endl;
        }
        else{
            cout<<s<<endl;
        }
     }
     
    }
     return 0;
}