
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    int dau = 0, cuoi = n-1;
    while (dau != cuoi) {
        if (a[dau] % 3 == 0 && a[dau] % 2 == 1) dau++;
        else {
            swap(a[dau], a[cuoi]);
            cuoi--;
        }
    }
    cuoi = n-1;
    while (dau != cuoi) {
        if (a[dau] % 3 == 0 && a[dau] % 2 == 0) dau++;
        else {
            swap(a[dau], a[cuoi]);
            cuoi--;
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}