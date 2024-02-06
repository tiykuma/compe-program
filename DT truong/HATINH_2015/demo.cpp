#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int swaps = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      // Tìm phần tử âm đầu tiên bên phải
      int j = i + 1;
      while (j < n && arr[j] < 0) {
        j++;
      }
      // Tráo đổi hai phần tử
      if (j < n) {
        swap(arr[i], arr[j]);
        swaps++;
      }
    }
  }
  cout << swaps;
  return 0;
}