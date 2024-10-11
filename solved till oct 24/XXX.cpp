#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
       int n,k;
    cin>>n>>k;
     vector<int>v(101,0);
    for(int i=0,z;i<n;i++)
    {
        cin>>z;
        v[z]++;
    }
   
   
    int s=v.size();
    sort(v.rbegin(),v.rend());
    int i=0;
    while(i<s)
    {
        if(v[i]>k)
        {
            v[i]--;
        }
        else if(v[i]==k)
        {v[i]=0;
            if(i+1<s)
            {
                v[i+1]+=k-1;
            }
            else{
                v[i]+=k-1;
            }
            i++;   
        }
        else{
           i++;
        }   
    }
    int sum=0;
    for(auto i:v)
    {
        sum+=i;
    }
    cout<<sum<<endl;
 }
 return 0;
}