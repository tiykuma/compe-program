#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxGiftValue(int n, int k, vector<int>& gifts) {
    vector<int> dp(n + 1, 0); // Mảng lưu trữ giá trị tối đa có thể nhận được
    vector<int> chosen(n + 1, 0); // Mảng lưu số lượng món quà đã được chọn liên tiếp
    
    for (int i = 1; i <= n; ++i) {
        // Nếu số lượng món quà đã được chọn liên tiếp trước đó không vượt quá k
        if (chosen[i - 1] < k) {
            dp[i] = dp[i - 1] + gifts[i - 1];
            chosen[i] = chosen[i - 1] + 1;
        } else {
            // Nếu đã chọn quá k món quà liên tiếp, cần phải loại bỏ một phần tử
            int maxVal = -1e9;
            int removed = -1;
            for (int j = i - k; j < i; ++j) {
                if (dp[j] > maxVal) {
                    maxVal = dp[j];
                    removed = j;
                }
            }
            dp[i] = maxVal + gifts[i - 1];
            chosen[i] = i - removed - 1;
        }
    }
    
    // Tìm giá trị lớn nhất trong mảng dp
    int maxSum = *max_element(dp.begin(), dp.end());
    
    return maxSum;
}

int main() {
    int n = 5;
    int k = 1;
    vector<int> gifts = {6,9,1,-3,5};
    
    cout << "Tổng giá trị lớn nhất có thể nhận được là: " << maxGiftValue(n, k, gifts) << endl;
    
    return 0;
}
