#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a&&b>c)
        {
            cout<<"PEAK"<<endl;
        }
        else if(a<b&&b<c)
        {
            cout<<"STAIR"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}