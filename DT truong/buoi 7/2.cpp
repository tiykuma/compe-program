#include <bits/stdc++.h>

using namespace std;

int main() {
    string x; int c = 0; getline(cin, x);
    for (int i = x.length()-1; i >= 0; i--) {
        if (x[i] == ' ') x.erase(i, 1);
        else break;
    }
    cout << x;
}