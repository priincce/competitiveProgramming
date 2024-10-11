#include<bits/stdc++.h>
using lli=long long int;
#define ppb pop_back;
#define ppf pop_front;
#define pf push_front;
#define pb push_back;

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--)
    {
       
    lli n,k;
    cin>>n>>k;
    deque<lli>dq;
    for(int i=0,x;i<n;i++)
    {
        cin>>x;
        dq.push_back(x);
    }
    int c=0;
 int f=1;
    while(k>0&&dq.size())
    {
        if(dq.size()==1)//only one ship left
        {
            if(dq.front()<=k)
                c++;
            break;
        }
    int x=dq.front();
    int y=dq.back();
    int z=min(x,y);
   dq.pop_front();
   dq.pop_back();
    if(f==1)
    {
        if(z==x)//we have to operate x and y at same time
        {
          if(k<2*z-1)break;// check whether the k is double 

          k-=2*z-1;
          y-=z-1;
          dq.push_back(y);
          c++;
          f=0;
          
        }
        else{
            if(k<2*z) break;
            k-=2*z;
            x-=z;
            dq.push_front(x);
            c++;

        }
    }
    else{
        if(z==y)
        {
             if(k<2*z-1) break;
          k-=2*z-1;
          x-=z-1;
          dq.push_front(x);
          c++;
          f=1;
        }
        else{
           if(k<2*z) break;
            k-=2*z;
            y-=z;
            dq.push_back(y);
            c++; 
        }
    }
    }
    cout<<c<<endl;
    }
    return 0;
}
