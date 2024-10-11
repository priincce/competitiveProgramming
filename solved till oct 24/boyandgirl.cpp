#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(auto i :s)
    {
        mp[i]++;
    }
    if(mp.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return  0;
}