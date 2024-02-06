#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int a[n]; unordered_map <int, int> freq;
    for (int i = 0; i < n; i++) {cin >> a[i]; freq[a[i]]++;}
    cout << "Cac gia tri xuat hien tu 2 lan tro len: "; for (auto i : freq) if (i.second >= 2) cout << i.first << " ";
    cout << "\nCac gia tri khac nhau trong day: "; for (auto i : freq) cout << i.first << " "; 
    int bdC = 0, ktC = 0, lCm = 0, lC = 1, bdD = 0, ktD = 0, lD = 0, lDm = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i-1]) lC++;
        else {
            if (lC > lCm) {ktC = i-1; lCm = lC;}
            lC = 1, bdC = i-lCm;
        }
        if (a[i] % k == 0&& a[i-1] % k == 0) lD++;
        else {
            if (lD > lDm) {ktD = i-1; lDm = lD;}
            lD = 1, bdD = i-lDm;
        }
    }
    if (lC > lCm) ktC = n-1;
    if (lD > lDm) ktD = n-1;

    cout << "\nDay co lien tiep dai nhat: ";
    for (int i = bdC; i <= ktC; i++) cout << a[i] << " ";
    cout << "\nDay lien tiep chia het cho k dai nhat: ";
    for (int i = bdD; i <= ktD; i++) cout << a[i] << " ";
}