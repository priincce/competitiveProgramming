#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ans=0,n;
  int left=-1,right=-1;
    cin>>n;
    int a;
    char b; 
  for(int i=0;  i <n;   i      ++)
  {    
    cin>>a;
    cin>>b; 
     if(b=='L' and left==-1){
         left = a; 
     }
     else if(b=='L'){
       ans+=abs(left-a);
     }         
     else if(b=='R' and right == -1)
     {
       right = a;
       
     }
     else if(b=='R'){
       ans+=abs(right-a);
     }
    
  }
  cout << ans <<endl;
  return 0;
}