#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// url: https://codeforces.com/problemset/problem/1136/B

// Function to solve the problem
int solve(int n, int k) {
    int pick = n;
    int thrw = n + 1;
    int go = n - 1;
    int go_back = n-k < k-1   ? n-k : k-1;
    
    int total = pick + thrw + go + go_back;

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    
    int result = solve(n, k); // replace with actual computation

    cout << result << "\n";

    return 0;
}
