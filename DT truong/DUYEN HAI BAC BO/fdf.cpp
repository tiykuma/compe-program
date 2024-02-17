#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm tính thứ hạng chung cuộc
vector<int> calculateOverallRanking(const vector<int>& rank1, const vector<int>& rank2, const vector<int>& rank3) {
    int n = rank1.size();
    vector<pair<int, int>> overall_ranking(n);
    for (int i = 0; i < n; ++i) {
        overall_ranking[i] = make_pair((1 << (rank1[i] - 1)) + (1 << (rank2[i] - 1)) + (1 << (rank3[i] - 1)), i + 1);
    }
    sort(overall_ranking.begin(), overall_ranking.end());
    vector<int> final_ranking(n);
    for (int i = 0; i < n; ++i) {
        final_ranking[overall_ranking[i].second - 1] = i + 1;
    }
    return final_ranking;
}

int main() {
    int n;
    cin >> n;

    vector<int> rank1(n), rank2(n), rank3(n);
    for (int i = 0; i < n; ++i) {
        cin >> rank1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> rank2[i];
    }

    // Tạo danh sách hoán vị cho môn An toàn thông tin
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) {
        perm[i] = i + 1;
    }

    // Tính toán thứ hạng chung cuộc cho mỗi trường hợp và lưu lại
    int best_ranking = INT_MAX, worst_ranking = INT_MIN;
    do {
        for (int i = 0; i < n; ++i) {
            rank3[i] = perm[i];
        }
        vector<int> overall_ranking = calculateOverallRanking(rank1, rank2, rank3);
        int min_ranking = *min_element(overall_ranking.begin(), overall_ranking.end());
        int max_ranking = *max_element(overall_ranking.begin(), overall_ranking.end());
        if (min_ranking < best_ranking) {
            best_ranking = min_ranking;
        }
        if (max_ranking > worst_ranking) {
            worst_ranking = max_ranking;
        }
    } while (next_permutation(perm.begin(), perm.end()));

    // In ra kết quả
    cout << "Thứ hạng tốt nhất chung cuộc: " << best_ranking << endl;
    cout << "Thứ hạng tồi nhất chung cuộc: " << worst_ranking << endl;

    return 0;
}
