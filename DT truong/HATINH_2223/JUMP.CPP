#include <bits/stdc++.h>

using namespace std;
long long n, m, a[1000000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("JUMP.INP", "r", stdin);
    freopen("JUMP.OUT", "w", stdout);
    long long count = 0;
    cin >> n >> m;
    for (long long i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    long long i = 0, j = n-1;
    while (i <= j) {
        if (a[i] + a[j] <= m) {count++; i++; j--;}
        else {count++; j--;}
    }

    cout << count;
}
