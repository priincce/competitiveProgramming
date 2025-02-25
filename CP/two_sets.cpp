#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    int num,val;
    cin>>num;
    val = (num*(num+1));
    if(val%4==0)
    {
      cout<<"YES"<<endl;
      val/=4;
      int sum=0;
      vector<int>nums1,nums2;
      for(int i=num;i>=1;i--)
      {
            if((sum+i)>val)
            {
                  nums2.push_back(i);
            }
            else{
                  nums1.push_back(i);
                  sum+=i;
            }
      }
      cout<<nums1.size()<<endl;
      for(int i=0;i<nums1.size();i++)
      {
            cout<<nums1[i]<<" ";
      }
      cout<<"\n"<<nums2.size()<<"\n";
      for(int i=0;i<nums2.size();i++)
      {
            cout<<nums2[i]<<" ";
      }
    }
    else{
      cout<<"NO"<<endl;
    }
    return 0;
}
