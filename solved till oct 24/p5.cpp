#include<bits/stdc++.h>
using namespace std;
bool solve(int i,int j,int d)
{
    float x=pow((float)i,2)+pow((float)j,2);
    float y=pow(d,2);
    return x==y;
}
int cnt(int d)
{
    int count=0;
   for(int i=-d;i<=d;i++)
   {
    for(int j=-d;j<=d;j++)
    {
        if(solve(i,j,d))
        {
            count++;
        }
    }
   }
   return count;
}
int main()
{ciel
    int t;
    cin>>t;
    while (t--)
    {
        int d;
        cin>>d;
        cout<<cnt(d)<<endl;
    }
    return 0;
    
}