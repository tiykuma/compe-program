#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1; 
    getline(cin, s1);
    string s2; 
    getline(cin, s2);
    int dem = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == s2[dem]) dem++;
        else dem == 0;
        if (dem == s2.length()) cout << "Bat dau tu i=" << i-dem+1;
    }
}