#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; 
    getline(cin, s);
    char j; cin >> j;
    int dem = 0;
    for (int i = 0; i < s.length(); i++) if (s[i] == j) dem++;
    cout << dem;
}