#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int total,invalid;
        total=((i*i)*(i*i-1))/2;
        invalid=4*(i-1)*(i-2);
        cout<<(total-invalid)<<endl;
    }
    return 0;
}
