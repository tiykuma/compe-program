#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max = INT_MIN; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) if (a[i] > max) max = a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            bool check = true;
            // bool contain = false;
            for (int k = i+1; k <= j; k++) {
                if (a[k] < a[k-1]) check = false;
                // if (a[k] == max || a[k-1] == max) contain = true;
            }
            if (check && a[j] == max) for (int k = i; k <= j; k++) cout << a[k] << " ";
            else continue;
            cout << endl;
        }
    }
}