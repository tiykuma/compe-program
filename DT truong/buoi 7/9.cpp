#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; 
    getline(cin, s);
    char j; cin >> j;
    int tu = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') tu++;
        else if (s[i] == j) {
            cout << tu;
            return 0;
        }
    }
}