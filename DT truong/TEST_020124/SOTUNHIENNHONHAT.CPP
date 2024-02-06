#include <bits/stdc++.h>

using namespace std;

int main() {
    long n; cin >> n;
    unordered_map <long, int> c;
    long a[n]; for (long i = 0; i < n; i++) {cin >> a[i]; c[a[i]]++;}
    sort(a, a + n);
    long i = 0;
    while(true) {
        if (c[i] == 0) {cout << i; return 0;}
        i++;
    }
}