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
    int l=s.size();
    vector<int>v(2,0);
    int cnt=0;
    for(int i=0;i<l;++i)
    {
        v[s[i]-'0']++;
        if(v[0]&&v[1])
        {
            cnt++;
            v[0]=v[1]=0;
        }
    }
    cout<<cnt+1<<endl;
    }
    return 0;
}