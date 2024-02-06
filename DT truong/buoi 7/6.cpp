#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; 
    getline(cin, s);
    s[0] -= 32;
    for (int i = 1; i < s.length(); i++) if (s[i-1] == ' ' && s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    cout << s;
}