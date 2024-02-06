#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; vector <int> duong, am; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) duong.push_back(a[i]);
        else am.push_back(a[i]);
    }
    sort(duong.rbegin(), duong.rend());
    sort(am.begin(), am.end());
    duong.insert(duong.end(), am.begin(), am.end());
    for (int i = 0; i < n; i++) cout << duong[i] << " ";
}