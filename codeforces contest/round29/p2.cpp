#include <iostream>
#include <string>
using namespace std;

string str(int n) {
      string ans="";
    if(n%2==0){
      string s(n-2,'3');
      ans+=s+"66";
    }
    else{
      string s(n-4,'3');
      ans+=s+"6366";
    }
    return ans;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n==1 or n==3)cout<<"-1"<<endl;
        else{
            cout << str(n) << endl;
        }
    }
    return 0;
}
