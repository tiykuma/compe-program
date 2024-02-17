#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
    vector<bool> isPrime(n+1, true);
    vector<int> primes;
    
    for (int p = 2; p <= sqrt(n); ++p) {
        if (isPrime[p]) {
            for (int i = p*p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
    
    return primes;
}

long long calculateSum(int l, int r, int val, const vector<int>& primes) {
    vector<long long> prefix_sum(primes.size(), 0);
    
    for (int i = 0; i < primes.size(); ++i) {
        if (i > 0) {
            prefix_sum[i] = prefix_sum[i-1] + abs(val - primes[i]);
        } else {
            prefix_sum[i] = abs(val - primes[i]);
        }
    }
    
    long long sum = 0;
    for (int prime : primes) {
        if (prime >= l && prime <= r) {
            int index = upper_bound(primes.begin(), primes.end(), prime) - primes.begin() - 1;
            sum += prefix_sum[index];
        }
    }
    return sum;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        int l, r, val;
        cin >> l >> r >> val;
        
        vector<int> primes = sieve(r);
        long long result = calculateSum(l, r, val, primes);
        cout << "Sum for query: " << result << endl;
    }

    return 0;
}
