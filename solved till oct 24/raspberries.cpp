#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        vector <int>v;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int m=INT_MIN,c=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(v[i]%k==0)
            {
                flag=true;
                break;
            }
            else 
            {
                m=max(m,v[i]%k);
            }
        }
        if(!flag){
            c=k-m;
        }
        cout<<c<<endl;
        
    }
    return 0;
}