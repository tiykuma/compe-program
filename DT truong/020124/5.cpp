#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; vector <int> b; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) if (a[i] % 2 != 0) b.push_back(a[i]);
    for (int i = 0; i < n; i++) if (!(a[i] % 2 != 0)) b.push_back(a[i]);
    for (int i = 0; i < n; i++) cout << b[i] << " "; 
}