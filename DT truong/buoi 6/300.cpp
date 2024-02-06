#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool check = true;
            for (int k = i+1; k <= j; k++) if (a[k] >= a[k-1]) check = false; 
            if (check) count++;
        }
    }
    cout << count;
}