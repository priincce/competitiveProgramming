#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int a=(s[0]-'0')*10+(s[1]-'0');
if(a==0)
{
s[0]='1';
s[1]='2';
s.push_back(' ');
s.push_back('A');
s.push_back('M');
}
else if(a<12)
{
s.push_back(' ');
s.push_back('A');
s.push_back('M');
}
else if(a==12)
{
s.push_back(' ');
s.push_back('P');
s.push_back('M');
}
else if(a>12){
 char d,c;
    int b=a-12;
    c=char(48+b%10);
    b=b/10;
    d=char(48+b);
    s[0]=d;
    s[1]=c;
s.push_back(' ');
s.push_back('P');
s.push_back('M');
}
cout<<s<<endl;
}
return 0;
}