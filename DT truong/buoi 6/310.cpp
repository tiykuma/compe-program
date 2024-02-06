#include <bits/stdc++.h>

using namespace std;

bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2 ; i <= sqrt(n); i++) if (n % i == 0) return false;
    return true;
}

int main() {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    vector <int> b; for (int i = 0; i < n; i++) if (snt(a[i])) b.push_back(a[i]);
    for (int i: b) cout << i <<  " ";
}