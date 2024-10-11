#include<bits/stdc++.h>
using lli=long long int;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<lli>v1,v2;
        for(lli i=0,j;i<n;i++)
        {
            cin>>j;
            v1.push_back(j);
        }
        for(lli i=0,j;i<n;i++)
        {
            cin>>j;
            v2.push_back(j);
        }
        bool flag=true;
        int c=0;
       while(flag)
       { 
        for(lli i=0;i<n;i++)
        {
            if(v1[i]<=v2[i])
            {
                flag=false;
            }
            else{
                v1.push_back(v2[i]);
                c++;
                flag=true;
            }
            if(flag)
            {
                sort(v1.begin(),v1.end());
                v1.pop_back();
            }
        }
       }
        cout<<c<<endl;
    }
    return 0;
}