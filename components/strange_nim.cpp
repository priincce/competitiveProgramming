#include<bits10_1.h>/stdc++.h>
using namespace std;

class SegTree
{
      public: 
      ll size;
      vector<vector<ll>>nums;
      SegTree(ll n)
      {
            size=1;
            while(size<n)size*=2;
            nums.assign(2*size-1,{1, 0, 0, 0, 0, 0, 0, 0});
      }
      void set_val(ll val, int index, int x, int left_x, int right_x)
      {
           if(right_x-left_x == 1)
           {
            nums[x]=vector<ll>(8);
            sum[x][val]++;
            sum[x][0]++;
            return;
           } 
           int mid = left_x+right_x)/2;
           if(index<mid)
      }
};