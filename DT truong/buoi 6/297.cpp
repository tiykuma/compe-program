#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            bool check = true;
            for (int k = i+1; k <= j; k++) if (a[k] <= a[k-1]) check = false; 
            if (check == true) {
                int sum = 0;
                for (int k = i; k <= j; k++) sum += a[k];
                cout << sum;
                cout << endl;
            }
        }
    }
}