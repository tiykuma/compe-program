#include <bits/stdc++.h>
using namespace std;

int main() {
int count_one = 0;
  int count_zero = 0;
  int segments = 0;
  int n; cin >> n;
  int A[n]; for (int i = 0; i < n; i++) cin >> A[i];
  for (int i = 0; i < n; ++i) {
    if (A[i] == 1) {
      ++count_one;
    } else {
      ++count_zero;
    }
    if (count_one == count_zero) {
      ++segments;
    }
  }
  std::cout << "Number of standard segments: " << segments << std::endl;
//   cout << 

  return 0;
}
