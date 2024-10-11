#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a ,b,c,ans=0;
        cin>>a>>b>>c;
        // ans=ans+a;
       if(b%3==0)
       {
        ans=a+(b/3+c/3);
        if(c%3!=0)
        {
            ans+=1;
        }
       }
       else{
        if((b%3+c)>=3)
        {
            ans=a+(b/3+(b%3+c)/3);
            if((b%3+c)%3!=0)
            {
                ans+=1;
            }
        }
        else{
            ans=-1;
        }
       }
        cout<<ans<<endl;
    }
    return 0;
}