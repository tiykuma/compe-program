#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max = INT_MIN, result; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        int uoc = 0;
        for (int j = 1; j <= sqrt(a[i]); j++) if (a[i] % j == 0) uoc++;
        if (uoc * 2 >= max) {
            max = uoc * 2;
            result = a[i];
        }
    }
    cout << "So " << result << " - so uoc la " << max;
}