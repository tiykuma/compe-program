#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B; cin >> A >> B;
    int n; cin >> n;
    int a[n]; vector <int> b; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) if (a[i] >= A && a[i] <= B) b.push_back(a[i]);
    for (int i = 0; i < n; i++) if (a[i] < A) b.push_back(a[i]);
    for (int i = 0; i < n; i++) if (!((a[i] >= A && a[i] <= B) || (a[i] < A))) b.push_back(a[i]);
    for (int i = 0; i < n; i++) cout << b[i] << " "; 
}