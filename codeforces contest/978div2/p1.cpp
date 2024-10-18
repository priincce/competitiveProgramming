#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    k*=2;
    int bad = 0,sum=0;
    for(int i=0, j; i< n ;i++)
    {
        cin >> j;
        if(j%2==1)
        {
            if(k>0)
            {
                k--;
            }
            else {
                bad++;
            }
        }
        sum+=j;
    }
    cout<<sum-bad<<endl;
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}