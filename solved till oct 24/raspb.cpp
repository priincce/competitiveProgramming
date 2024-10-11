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
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x%2==0){cnt++;}
            v.push_back(x);
        }
       
        if(n>=2)
        {
            cout<<max(0,2-cnt)<<endl;
        }
        else{
            cout<<v[0]%k<<endl;
        }
    }
    return 0;
}