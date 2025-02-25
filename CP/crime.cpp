#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve() {
    int n,pos=0,sum=0;
    cin >> n;
   for(int i=0;i<n;i++)
   {
      int j;
      cin>>j;
      if(j>0)
      {
            pos+=j;
      }
      else if(pos!=0 and j<0)
      {
            pos--;
      }else{
            sum++;
      }
   }
   cout<<sum<<endl;
}

int main() {
   int tt;
   cin>>tt;
   while(tt--)
   {
      solve();
   }
    return 0;
}
