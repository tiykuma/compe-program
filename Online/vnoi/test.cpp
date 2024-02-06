#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void sieve_of_eratosthenes(int limit) {
    std::vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int number = 2; number <= sqrt(limit); ++number) {
        if (is_prime[number]) {
            // Đánh dấu tất cả bội của số nguyên tố number
            for (int multiple = number * number; multiple <= limit; multiple += number) {
                is_prime[multiple] = false;
            }
        }
    }

    // In ra các số nguyên tố
    cout << is_prime[limit];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve_of_eratosthenes(9999994);
}