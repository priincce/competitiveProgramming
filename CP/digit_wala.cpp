#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long int n, t;
    cin >> n >> t;

    __float128 gf = 1.000000011;
    __float128 res = powl(gf, t);
   
    __float128 ans = n*res;
    cout << fixed << setprecision(31);
    cout << (double)ans<< endl;

    return 0;
}
