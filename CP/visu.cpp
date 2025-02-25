#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >>n;
    bool flag =true;
    
    string s,s1="111",s2="000";
    cin >> s;
    if(s=="11" or s=="00"){cout<<"NO"<<endl;return;}
    if(n<=2){
      cout<<"YES"<<endl;
    }
    for(int i=0;i<n-3;i++)
    {
        string z=s.substr(i,3);
      //   cout<<z<<endl;
        break;
        if(z==s1 or z==s2){
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
int tt=1;
cin >> tt;
while(tt--)
{
    solve();
}
return 0;

}
