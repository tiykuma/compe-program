#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; vector <int> b; for (int i = 0; i < n; i++) cin >> a[i];
    int min = *min_element(a, a + n);
    for (int i = 0; i < count(a, a + n, min); i++) b.push_back(min);
    int max = *max_element(a, a + n);
    for (int i = 0; i < count(a, a + n, max); i++) b.push_back(max);
    for (int i = 0; i < n; i++) if (a[i] != min && a[i] != max) b.push_back(a[i]);
    for (int i = 0; i < n; i++) cout << b[i] << " "; 
}