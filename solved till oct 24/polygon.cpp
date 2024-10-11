#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(101,0);
         for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[x]++; 
        }
       int cnt=0;
       for(int i=1;i<=100;i++)
       {
        cnt+=v[i]/3;
        v[i]=0;
       }
       cout<<cnt<<endl;
    }
    return 0;
}