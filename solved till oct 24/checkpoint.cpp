#include<iostream>
using namespace std;
int main()
{
    int a,x,y;
    cin>>a>>x>>y;
    if(x>0&&y>0)
    {
        if(x<a&&y<b)
        {
            cout<<0<<"\n";
        }
        else if(x<a&&y==a||y<a&&x==a)
        {
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
    else {
        cout<<2<<"\n";
    }
    return 0;
}