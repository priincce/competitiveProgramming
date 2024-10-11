#include <bits/stdc++.h>
using namespace std;
void solve()
{
    float x,y,z;
    int cnt=-1;
    cin>>x>>y>>z;
    if(z>=y){
    cout<<0<<endl;
 }
  else if(z<y){
       for(int i=1;i<=50;i++)
    {
        float r=y*(100-x*(float)i)/100;
        float q=z-i;
        if(q>=r){
            cnt=i;
            break;
        }
    }
    cout<<cnt<<endl;
 }
 
    
}
int main() {
    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;

}
