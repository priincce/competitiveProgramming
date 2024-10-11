#include<bits/stdc++.h>
using namespace std;
bool isEqual(vector<int>&a,vector<int>&b)
{
    bool flag=false;
    
   
        for(int z=0;z<a.size();z++)
        {
            if(a[z]!=b[z])
            {
                flag=true;
                break;
            }
        }
    return !flag;

}
int min_array(vector<int>&arr)
{
    int ans=INT_MAX;
    for(auto i:arr)
    {
        if(i<ans) ans=i;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        vector<int>a(n*n);
        for(auto &i:a)
        {
            cin>>i;
        }

        vector<vector<int>>b(n,vector<int>(n,0));
        
  
    b[0][0]=min_array(a);
    for(int i=1;i<n;i++)
    {
       b[i][0]=b[i-1][0]+c;
    }
         for(int i=0;i<n;i++)
    {
        for(int z=1;z<n;z++)
        {
            
                b[i][z]=b[i][z-1]+d;
                  
        }
    }
    vector <int >g;
        for(int i=0;i<n;i++)
    {
        for(int z=0;z<n;z++)
        {
            
                g.push_back(b[i][z]);
                  
        }
    }
    sort(a.begin(),a.end());
    sort(g.begin(),g.end());

    if(isEqual(a,g))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;

}