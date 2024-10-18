#include<bits/stdc++.h>
using namespace std;
void swap1(int* x,int* y)
{
      *x=*x^*y;
      *y=*x^*y;
      *x=*x^*y;
}

void solve()
{
      int a= 6, b = 4;
      cout <<a<<" "<<b << endl;
      swap1(&a,&b);

      cout <<a<<" "<<b << endl;
}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int t=1;
      //uncomment if multiple test cases
      // cin >> t; 
      while(t--)
      {
            solve();
      }
      return 0;
}