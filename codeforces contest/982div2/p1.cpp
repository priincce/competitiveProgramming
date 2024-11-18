#include<bits/stdc++.h>
using namespace std;
using ll= long long int ;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>  vi;
typedef vector<ll> vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626
#define MOD 1e9+7

#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int i,j;
int maximumLength(vector<int>& arr) {
    int n = arr.size();
    int maxLength = n;

    bool changed;
    do {
        changed = false; 
        for (int i = 1; i <= n; ++i) {
            
            if (arr[i ] == maxLength  - i) {
                maxLength += (i); // Append i - 1 zeros
                changed = true; 
                break; 
            }
        }
    } while (changed); 

    return maxLength;
}
int maximumLength1(vector<int>& arr) {
    int n = arr.size();
    int maxLength = n;

    bool changed;
    do {
        changed = false; 
        for (int i = n; i >= 2; --i) { 
            
            if (arr[i - 1] == maxLength + 1 - i) {
                maxLength += (i - 1); 
                changed = true; 
                break; 
            }
        }
    } while (changed); 

    return maxLength;
}


void solve()
{  int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << max(maximumLength(a),maximumLength1(a)) << endl;
       
}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int tt=1;
      cin >> tt; 
      while(tt--)
      {
            solve();
      }
      return 0;
}