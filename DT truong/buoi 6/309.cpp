#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    vector <int> b; 
    b.push_back(a[1]);
    for (int i = 1; i < n-1; i++)  b.push_back(a[i-1] + a[i+1]);
    b.push_back(a[n-2]);
    for (int i: b) cout << i <<  " ";
}