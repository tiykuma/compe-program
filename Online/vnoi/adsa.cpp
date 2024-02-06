#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    long long count = 0;
    for (long long i = 1; i <= sqrt(n); i += 1.0) {
        if (n % i == 0) {
            count++;
            if (n/i !=i) count++;
        }
    }
    cout << count;
    return 0;
}