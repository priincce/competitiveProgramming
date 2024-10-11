#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n,c=0;
    vector<int>v;
    cin>>n;
    if(n==2){
        cout<<2<<endl;
    }
    else{
        for(int i=0,z;i<n;i++)
        {
            cin>>z;
            v.push_back(z);
        }
        for(int i=0;i<n;i++)
        {
            for(int z=i;z<n;z++)
            {
                if(v[z]<v[i])
                {
                    c++;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
   }
return 0;
}