#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; 
    getline(cin, s);
    for (int i = 1; i < s.length(); i++) {
        if (s[i-1] >= 'A' && s[i-1] <= 'Z' && !(s[i] >= 'a' && s[i] <= 'z')) s[i] += 32;
        if (s[i-1] >= 'a' && s[i-1] <= 'z' && !(s[i] >= 'A' && s[i] <= 'Z')) s[i] -= 32;
    }
    cout << s;
}