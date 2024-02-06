#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n; getline(cin, n);
    for (auto i : n) {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) cout << i;
    }
}