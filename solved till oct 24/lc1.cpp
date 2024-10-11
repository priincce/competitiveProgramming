#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>arr)
{
    for(auto a:arr)
    {
        cout<<a<< " ";
    }
    cout<<endl;
}
void printString(string s)
{
    cout<<s<<endl;
}
void print2Dvector(vector<vector<int>>v)
{
    for(auto a:v)
    {
        for(auto x:a)
        {
            cout<<x<< " ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<int>arr;
    vector<vector<int>>arr2;
  
    for(int i=1;i<=12;i++)
    {
        arr.push_back(i);
    }
      for(int i=1;i<=12;i++)
    {
         arr2.push_back(arr);
    }
    // printVector(arr);
    print2Dvector(arr2);
    return 0;
}
