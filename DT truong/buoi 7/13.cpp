#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int dem = s.length(); 
    for (int i = s.length()-1; i >= 0; i--) {
        if (s[i] == ' ') {
            for (int j = i+1; j < dem; j++) cout << s[j];
            cout << ' ';
            dem = i;
        }
    }
    for (int j = 0; j < dem; j++) cout << s[j];
}