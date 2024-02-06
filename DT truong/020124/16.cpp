#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> chan, le, tc, a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x); 
        if (x % 2 == 0) tc.push_back(0); else tc.push_back(1); 
        if (x % 2 == 0) chan.push_back(x); else le.push_back(x);
    }
    sort(chan.rbegin(), chan.rend());
    sort(le.rbegin(), le.rend());
    a.clear();
    // cout << "ai";
    int c = 0, l = 0;
    for (int i = 0; i < n; i++) {
        if (tc[i] == 0) {
            a.push_back(chan[c]);
            c++;
        }
        else {
            a.push_back(le[l]);
            l++;
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}