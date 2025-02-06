#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/trie_policy.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// template<typename T>
// using oset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void actualcode();
#define ll long long int
#define endl "\n"
int mod = 1e9 + 7;
void YES() { cout << "YES" << endl; }
void NO() { cout << "NO" << endl; }
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   // #ifndef ONLINE_JUDGE
   //     freopen("Test_Case_10.txt","r",stdin);
   //     freopen("Output_Manik.txt","w",stdout);
   // #endif
   actualcode();
}
void actualcode()
{
   int t = 1;
   cin >> t;
   ll zero = 0;
   while (t--)
   {
       int n;
       cin>>n;
       vector<int> arr(n);
       set<int> st;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           st.insert(arr[i]);
       }
       vector<pair<int,int>> dp(2*n,{0,0});
       for(int i=0;i<2*n;i++)
       { 
           int temp = 0;
           for(int j=0;j<25;j++)
           {
               temp |= dp[i & (~(1<<j))].first;
           }
           if(st.count(i)) temp |= i;
           dp[i].first = temp;
           temp = 0;
           for(int j=0;j<25;j++)
           {
               temp = max(temp,dp[i & (~(1<<j))].second + (dp[i & (~(1<<j))].first != dp[i].first));
           }
           dp[i].second = temp;
           if (i==0 && st.count(i)) dp[i].second = 1;
       }
       int x = (1<<(int(log2(n))+1)) - 1;
       cout<<dp[x].second<<"\n";
   }
}