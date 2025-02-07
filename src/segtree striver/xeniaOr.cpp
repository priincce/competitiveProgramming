#include<bits/stdc++.h>
using namespace std;

void build(int ind, int low, int high, int arr[], int seg[], bool orr)
{
      if(low==high)
      {
            seg[ind]=arr[low];
            return;
      }

      int mid = (low+high)>>1;
      build(2*ind+1, low, mid, arr, seg, !orr);
      build(2*ind+2, mid+1, high, arr, seg, !orr);

      if(orr) seg[ind]= seg[2*ind+1] | seg[2*ind+2];
      else  seg[ind]= seg[2*ind+1] ^ seg[2*ind+2];
}
void update(int ind, int low, int high, int i, int val, int seg[], bool orr)
{
      if(low==high)
      {
            seg[ind]=val;
            return;
      }
      int mid =(low+high)>>1;

      if(i<=mid)update(2*ind+1, low, mid, i, val, seg, !orr);
      else update(2*ind+2, mid+1, high, i, val, seg, !orr);

      if(orr) seg[ind]= seg[2*ind+1] | seg[2*ind+2];
      else  seg[ind]= seg[2*ind+1] ^ seg[2*ind+2];
}
void solve()
{
      int n, q, ele;
      cin >>n >> q;
      ele = 1<<n;
      int arr[ele];
      for(int i=0;i<ele;i++)cin>>arr[i];

      int seg[4*ele];
      bool orr =0;
      if(n&1)orr=1;

      build(0, 0, ele-1, arr,seg, orr);

      while(q--)
      {
            int i, val;
            cin >>i >> val;
            i--; // conversion to 0 based indexing
            update(0, 0, ele-1,  i, val, seg, orr);
            cout<<seg[0]<<"\n";
      }
}

int main(void)
{
      solve();
      return 0;
}