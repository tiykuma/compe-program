#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; vector <int> chan, le; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) chan.push_back(a[i]);
        else le.push_back(a[i]);
    }
    sort(chan.begin(), chan.end());
    sort(le.rbegin(), le.rend());
    chan.insert(chan.end(), le.begin(), le.end());
    for (int i = 0; i < n; i++) cout << chan[i] << " ";
}