#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a,b;
        int c,d,k;
        cin>>c>>d>>k;
        for(int i=0;i<c;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);           
        }
        sort(a.begin(),a.end());
        for(int i=0;i<d;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);           
        }
        sort(b.begin(),b.end());
        int count=0;
        for(auto i:a)
        {
            for(auto z:b)
            {
                if(i+z<=k)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}