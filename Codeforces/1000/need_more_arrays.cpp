#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// url: https://codeforces.com/problemset/problem/2114/C


// This function should contain the logic to solve one test case
int solve(vector<int>& a) {
    int n = a.size();

    int total = 0;
    int count = 1;

    for(int i=1; i<n; i++) {
        
        if(a[i-1] + 1 < a[i]) {
            total += (int)ceil((double)count / 2);
            count = 1;
        }
        else if(a[i-1] != a[i]) {
            count += 1;
        }
        // std::cout << "count=" << count << std::endl;
    }

  
    total += (int)ceil((double)count / 2);
  

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        cout << solve(a) << "\n";
    }

    return 0;
}