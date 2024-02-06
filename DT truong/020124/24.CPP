#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i; cin >> n >> i;
    int a[n], s[n+1] = {0}; for (int i = 0; i < n; i++) {cin >> a[i]; s[i+1] = a[i] + s[i];}
    cout << s[i+1];
}