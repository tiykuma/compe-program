#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int dem = 0; 
    string ho = s.substr(0,s.find_last_of(' '));
    string ten = s.substr(s.find_last_of(' ') + 1);
    cout << ho << endl;
    cout << ten;
}   