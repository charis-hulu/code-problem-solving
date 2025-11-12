#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// url: https://codeforces.com/contest/451/problem/B


void solve(vector<int>& a, int n) {

    int left = 0;
    int right = 0;
    
    int final_left = 0;
    int final_right = 0;

    int counter = 0;

    for(int i=0; i<n; i++) {
        if(a[i] > a[i-1]) {
            if(left != right) {
                counter += 1;
                final_left = left;
                final_right = right;
            }

            left = i;
        
        }
        right = i;
    }

    if(left != right) {
        counter += 1;
        final_left = left;
        final_right = right;
    }


    if(counter > 1) {
        cout << "no" << endl; 
    }
    else {

        int outer_left = -2000000000;
        int outer_right = 2000000000;

        if(final_left - 1 > -1) {
            outer_left = a[final_left - 1];
        }
        if(final_right + 1 < n) {
            outer_right = a[final_right + 1];
        }

        if(a[final_right] > outer_left && a[final_left] < outer_right) {
            cout << "yes" << endl;
            cout << final_left + 1 << " " << final_right + 1 << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    solve(a, n);


    return 0;
}