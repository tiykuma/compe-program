#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countSubarraysWithDistinctValues(const vector<int>& arr, int k) {
    int n = arr.size();
    int count = 0;
    unordered_map<int, int> freqMap;

    for (int left = 0, right = 0; right < n; right++) {
        freqMap[arr[right]]++;

        while (freqMap.size() > k) {
            freqMap[arr[left]]--;
            if (freqMap[arr[left]] == 0) {
                freqMap.erase(arr[left]);
            }
            left++;
        }

        count += (right - left + 1);
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1};
    int k = 2;

    int result = countSubarraysWithDistinctValues(arr, k);

    cout << "Số lượng mảng con có tối đa " << k << " phần tử khác nhau là: " << result << endl;

    return 0;
}
