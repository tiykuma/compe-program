#include <bits/stdc++.h>
long long n, a[1000000]; 

using namespace std;
int main() {
    cin >> n;
    long long count = 0;
    map<double, double> b;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    for (auto i : b) count += ceil(i.second / i.first);
    cout << count;
}