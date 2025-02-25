#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
      int x1,x2,x3,y1,y2,y3;
      cin>>x1>>y1>>x2>>y2>>x3>>y3;
      int ans=(x2-x1)*(y3-y2)-(y2-y1)*(x3-x2);
      if(ans<0)
      {
            cout<<"RIGHT"<<endl;
      }
      else if(ans>0)
      {
            cout<<"LEFT"<<endl;
      }
      else{
            cout<<"TOWARDS"<<endl;
      }
}