#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int val1=INT_MIN,val2=INT_MIN;
    bool flag=true,f=false;
    for(auto i:s)
    {
        if(isalpha(i)&&int(i-'a')>=val1)
        {
            f=true;
            val1=int(i-'a');
        }
        else if(int(i-'0')>=val2&&!f)
        {
            val2=int(i-'0');
        }
        else{
            flag=false;
            break;
        }
    }
    if (flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}