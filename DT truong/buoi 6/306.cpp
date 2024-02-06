#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum1 = 0, sum2 = INT_MIN, bd, kt; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        sum1 += a[i];
        if (sum1 > sum2) {
            sum2 = sum1;
            kt = i;
        }
        if (sum1 < 0) {
            bd = i+1;
            sum1 = 0;
        }
    }
    for (int i = bd; i <= kt; i++) cout << a[i] << " ";
}