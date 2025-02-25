#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int tw=0,tr=0,sum=0;
  string s;
  cin >> s;
  for(char c :s)
   {
    int val = int(c-'0');
    sum+=val;
    if(val==2)tw++;
    if(val==3)tr++;
   }
   for(int i=0;i<min(10,tw+1);i++){
    for(int j=0;j<min(10,tr+1);j++){
          if((sum+i*2+j*6)%9==0){
            cout<<"YES"<<endl;
            return;
           }
      }
    } 
cout<<"NO"<<endl;
}
int main(){
   
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int tt =1;
   cin>>tt;
   while(tt--){solve();}
   return 0;
}