#include<bits/stdc++.h>
using namespace std;
bool canMakeSquare(vector<vector<char>>& grid) {
        string sample="";
        for(auto i:grid)
        {
            for(auto z:i)
            {
                sample+=z;
            }
        }
       string x="BWBWBWBWB";
        string y="WBWBWBWBW";
            return !(sample==x||sample==y);
        
    }
int main()
{
    vector<vector<char>>v;
    for(int i=0;i<3;i++)
    {    vector<char>x;
        for(int z=0;z<3;z++)
        {
            char t;
            cin>>t;
            x.push_back(t);
        }
        v.push_back(x);
    }
    cout<<canMakeSquare(v)<<endl;
    return 0;
}