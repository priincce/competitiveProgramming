#include<bits/stdc++.h>
using ulli=unsigned long long int;
using namespace std;
int main()
{
    ulli n,m,a;
    cin>>n>>m>>a;
    n=n/a+(n%a>0);
    m=m/a+(m%a>0);
    cout<<n*m<<endl;
    return 0;
}