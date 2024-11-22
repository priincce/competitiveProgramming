/*
						WOODS ARE LOVELY DARK AND DEEP
						BUT HAVE MY PROMISES TO KEEP 
						AND MILES TO GO BEFORE I SLEEP 
						AND MILES TO GO BEFORE I SLEEP
*/
/*********************************   DO YOU REALY DESERVE IT   *************************************/

#include<bits/stdc++.h>
using namespace std;


#define int       long long int
#define F         first
#define S         second
#define pb        push_back
#define si        set<int>
#define vi        vector<int>
#define pii       pair<int, int>
#define vpi       vector<pii>
#define umii      unordered_map<int,int>
#define mii       map<int,int>
#define endl      "\n"
#define sz(x)     ((int)x.size())
#define all(p)    p.begin(),p.end()
#define double    long double
#define qu_max    priority_queue<int>
#define qu_min    priority_queue<int,vi,greater<int>>
#define bug(...)  __f(#__VA_ARGS__,__VA_ARGS__)
#define print()   for(auto x:a)cout<<x<<" "; cout<<endl;
#define print1()  for(auto x:a)cout<<x.F<<" "<<x.S<<endl;
#define print(a,x,y)    for(int i=x;i<y;i++)cout<<a[i]<<" "; cout<<endl;


const int MOD = 1000000007;
struct pair_hash {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
void solve() {
      int n,k,remaining=0;
      cin>>n>>k;
      remaining=n*n-k;
      unordered_set<pair<int, int>, pair_hash> s;
      for(int i=0;i<k;i++)
      {
        int row,col;
        cin>>row>>col;
        s.insert({row-1,col-1});
      }

     vector<pair<int,int>>directions={{1,2},{2,1},{1,-2},{-1,2},{-1,-2},{-2,1},{2,-1},{-2,-1}};



    for(auto i:s)
        {
            int x=i.first;
            int y=i.second;
            for(auto dir:directions)
            {
                int newRow=x+dir.first;
                int newCol=y+dir.second;
                if(newRow<n and newRow>=0 and newCol<n and newCol>=0)
                {
                    if(!(s.find({newRow,newCol})!=s.end()))
                    {
                        s.insert({newRow,newCol});
                        remaining--;
                    }
                }
            }
        }
cout<<remaining<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
