#include <bits/stdc++.h>
using namespace std;

// url: https://codeforces.com/problemset/problem/2148/D

// Function to solve one test case
long long solve(const vector<long long>& a) {
    int n = a.size();

    vector<int> odds;
    long long total_even = 0;
    long long total_odd = 0;

    long long result = 0;

    for(int i=0; i<n; i++) {
        if(a[i] % 2 != 0) {
            odds.push_back(a[i]);
        }
        else {
            total_even += a[i];
        }
    }

    sort(odds.begin(), odds.end(), greater<int>());

    // cout << "sorted_odds = ";
    // for (int x : odds)
    //     cout << x << " ";

    // cout << endl;

    int mid = (int)ceil((double) odds.size() / 2);
    // cout << "odd size=" << odds.size() << endl;
    // cout << "mid=" << mid << endl;

    for(int i=0; i<mid; i++) {
        total_odd += odds[i];
    }

    if(total_odd == 0) {
        return total_odd;
    }

    result = total_odd + total_even;
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        cout << solve(a) << "\n";
    }

    return 0;
}
