#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool canMakeBagsIdentical(vector<int>& a) {
    set<int> bag2; // Represents numbers moved to the second bag

    // Insert all distinct numbers into bag2
    for (int num : a) {
        bag2.insert(num);
    }

    // Transform numbers in the first bag to match bag2
    for (int& num : a) {
        while (bag2.find(num) != bag2.end()) { // If already in bag2, increment it
            num++;
        }
        bag2.insert(num); // Insert the new incremented value
    }

    // After the process, check if both bags contain the same elements
    set<int> bag1(a.begin(), a.end());
    return bag1 == bag2;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
      int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (canMakeBagsIdentical(a)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    }
    return 0;
}
