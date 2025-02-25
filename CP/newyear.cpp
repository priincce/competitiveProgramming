#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check(int a,int b){
      return ((a+a)>b) or ((a+b)>b) or ()
}
void solve() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n; // Length of the array
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
       int cnt=0; 
        if (n < 3) 
        {
            cout<<"NO"<<endl;
            return;
        }
   
    sort(a.begin(),a.end());

       for(int i=0;i<n-2;i++){
   if (a[i] + a[i + 1] > a[i + 2])cnt++;
       }
        if (cnt>=2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
