#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a%2!=0)
        {
            a++;
        }
        cout<<a/2-1<<endl;
    }
    return 0;
}