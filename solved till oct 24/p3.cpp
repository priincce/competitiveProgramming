#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt=0;
        vector<int>v;
        if(a>=b)
        {
            for(int i=a;i<=12;i++)
            {
                v.push_back(i);
            }
            for(int i=1;i<=b;i++)
            {
                v.push_back(i);
            }
        }
        else{
           for(int i=a;i<=b;i++)
            {
                v.push_back(i);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==c)
            {
                cnt++;
            }
            if(v[i]==d)
            {
                cnt++;
            }
        }

       if(cnt==1)
       {
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
       
    }
    return 0;
}