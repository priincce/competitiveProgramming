#include <bits/stdc++.h>
using namespace std;


void solve() {
    int N;
    cin >> N;
    vector<pair<double,double>> v(N + 1); 
    v[0] = {0, 0}; 

    for (int i = 1; i <= N; i++) {
        double x, y;
        cin >> x >> y;
        v[i] = {x,y};
    }

    long double totalDistance = 0.0;

    for (int i = 0; i < N; i++) {
        totalDistance += sqrt(pow(v[i + 1].first - v[i].first, 2) + pow(v[i + 1].second - v[i].second, 2));
    }
totalDistance += sqrt(pow(v[N].first - v[0].first, 2) + pow(v[N].second - v[0].second, 2));
    cout << fixed << setprecision(20) << totalDistance << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; 
    // cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
