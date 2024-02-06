#include <bits/stdc++.h>

using namespace std;

int main() {
    string x1, x2; 
    getline(cin, x1);
    getline(cin, x2);
    x1.insert(x1.length(), x2);
    cout << x1;
}