#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, a[1000000], ss[1000001], sss[1000001];
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ss[i+1]=(ss[i]+a[i]);
    }
    int i = 0, j = n;
    while (i != j) {
        int eq = (ss[j] - ss[i]) / (j-i);
        cout << eq << ' ';
        if (eq >= k) break;
        else i++;
    }
    cout << endl << i + 1 << ' ' << j;
}