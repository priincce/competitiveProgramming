#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>arr;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int val;
        int index;
        int l=arr.size();
         if(l%2==0)
        {
            index=l/2;
        }
        else{
            index=l/2+1;
        }
        
        int count=0;
        sort(arr.begin(),arr.end());
        val=arr[index-1];
       for(int i=index-1;i<arr.size();i++)
       {
        if(arr[i]==val)
        {
            count++;
        }
    
    
       }
        // reverse(arr.begin(),arr.end());
        
       
        cout<<count<<endl;
    }
}