#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  // Khởi tạo mảng lưu trữ trạng thái của các bit
  bool *bits = new bool[n];
  for (int i = 0; i < n; i++) {
    cin >> bits[i];
  }

  // Khởi tạo biến đếm số đoạn tín hiệu chuẩn
  int count = 0;

  // Duyệt qua các bit trong dãy
  for (int i = 0; i < n; i++) {
    // Nếu bit hiện tại khác với bit trước đó
    if (bits[i] != bits[i - 1]) {
      // Thêm một đoạn tín hiệu chuẩn
      count++;
    }
  }

  // In ra số đoạn tín hiệu chuẩn
  cout << count << endl;

  // Giải phóng bộ nhớ
  delete[] bits;

  return 0;
}
