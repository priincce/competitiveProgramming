#include<bits/stdc++.h>
using namespace std;
int main()
{     
      int y;
      cin>>y;
      for(int i=y+1;y<=9000;i++)
      {
            int temp =i;
            int num1=temp%10;temp/=10;
            int num2=temp%10;temp/=10;
            int num3=temp%10;temp/=10;
            int num4=temp%10;
            if(num1!=num2 and num2!=num3 and num3!=num4 and num4!=num1 and num1!=num3 and num4!=num2){cout<<i<<endl;

            break;}
      }
}