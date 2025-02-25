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
/*
Algorithm 1

Create letters, a hash set of all letters in s.
Initialize ans = 0.
Iterate over each letter in letters:
Calculate i as the first index in which letter appears in s and j as the final index in which letter appears in s:
Initialize i = -1 and j = 0. Iterate over each index k in s. If s[k] = letter, set i = k if i = -1, and set j = k.
Initialize a hash set between.
Iterate k over the indices between i and j:
Add s[k] to between.
Add the length of between to ans.
Return ans.

Algorithm 2

Initialize first and last as arrays of length 26 with values -1.
Iterate i over the indices of s:
Calculate the current alphabet position as curr = s[i] - 'a'.
If first[curr] = -1, set first[curr] = i.
Set last[curr] = i.
Initialize ans = 0.
Iterate over each alphabet position i from 0 until 26:
If first[i] = -1, continue to the next iteration.
Initialize a hash set between.
Iterate j over the indices between first[i] and last[i]:
Add s[j] to between.
Add the length of between to ans.
Return ans.

Algorithm 3


 */
class Solution {
public:
    int countPalindromicSubsequence1(string s) {
        int n=s.size();
       unordered_set<char>st;
       for(auto c:s)st.insert(c);

       int count=0;
       for(auto c:st)
       {
        int i=-1,j=0;
        for(int k =0;k<n;k++)
        {
            if(s[k]==c)
            {
                if(i==-1)i=k;
                j=k;
            }
        }
        unordered_set<char>between;
        for(int k=i+1;k<j;++k)
        {
            between.insert(s[k]);
        }
        count+=between.size();
       }
       return count;

    }
//      int countPalindromicSubsequence1(string s) {
//         int n=s.size();

//     }
};

void solve()
{
	string s;
      cin >> s;
      Solution T;
      cout << T.countPalindromicSubsequence1(s) << endl;
}

int32_t main()
{ 
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	clock_t z = clock();
	int tt = 1;

	// cin >> tt;
	const int mod = 1e9 + 7;
	while(tt--) solve();
	cerr<<"RUN TIME : "<<((double)(clock()-z)/CLOCKS_PER_SEC)<<" Sec  ";
	return 0;
}

