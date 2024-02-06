#include <bits/stdc++.h>

using namespace std;

int PhanTich (int n) {
    unordered_map <int, int> ts;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            ts[i]++;
            n /= i;
        }
    }
    int count = 0;
    for (auto i : ts) count += i.second;
    return count;
}

int main() {
    int n; cin >> n;
    int k; cin >> k;
    cout << (PhanTich(n) >= k ? "Dung" : "Sai");
}