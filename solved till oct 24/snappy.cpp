#include<bits/stdc++.h>
#define lli long long int
#define vi vector<int>
#define vll vector<long long int>

using namespace std;

int reversort(vi&L)
{ 
    int cost =0; 

    for(int i = 0; i < L.size()-1;i++)
    {
        int m = *min_element(L.begin() + i,L.end());
        auto x = find(L.begin(),L.end(),m);
        reverse(L.begin()+i,x+1);
        cost += distance(L.begin(),x)-i+1;
    }
    return cost;
}

void solve()
{
    int n;
    cin >> n;
    vi L;
    for( int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        L.push_back(j);
    }
    cout<<reversort(L)<<endl;
}

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        solve();
    }
    return 0;
}