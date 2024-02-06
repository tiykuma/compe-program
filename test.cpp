#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long S(long long N) {
    long long r = (long long) sqrt(N);
    vector <long long> a(r + 1);
    vector <long long> b(r + 1);
    for (long long i = 1; i <= r; i++) {
        a[i] = i * (i + 1) / 2 - 1;
        b[i] = (N/i) * (N/i + 1) / 2 - 1;
    }
    for (long long p = 2; p <= r; p++)
        if (a[p] > a[p - 1]) {
            long long sp = a[p - 1];
            long long p2 = p * p;
            long long to = min(r, N/p2);
            for (long long i = 1; i <= to; i++) {
                long long vp = i * p;
                if (vp <= r) vp = b[vp];
                else vp = a[N / vp];
                b[i] -= p * (vp - sp);
            }
            for (long long v = r; v >= p2; v--)
                a[v] -= p * (a[v/p] - sp);
        }
    return b[1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    for (int i = 1; i < 1000000; i++) cout << S(i) << ' ';
}