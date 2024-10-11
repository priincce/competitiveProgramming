#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    cin>>a;
    vector<int>
    bool flag=false;
    for(int i=0,j;i<a;i++)
    {
        cin>>j;
        v[j]++;
        
    }
    cin>>b;
    for(int i=0,j;i<b;i++)
    {
        cin>>j;
       v[j]++;
    }
    for(int i=1;i<n+1;i++)
    {
        if(v[i]==0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}