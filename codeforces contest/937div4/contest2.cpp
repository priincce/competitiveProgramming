#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    bool flag=true;
    int count=0;
    for(int i=0;i<2*n;i++)
    {
        for(int z=0;z<n;z++)
        {
            if(flag)
            {
                if(z%2==0)
            {
                cout<<"##";
            }
            else{
                cout<<"..";
            }
            }
            else{
                if(z%2==0)
            {
                cout<<"..";
            }
            else{
                cout<<"##";
            }
            }
        }
        cout<<endl;
        count++;
        if(count%2==0){
        flag=!flag;}
    }
    }
    return 0;
}