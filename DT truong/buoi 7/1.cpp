#include <bits/stdc++.h>

using namespace std;

int main() {
    string x; int c = 0; getline(cin, x);
    for (int i = 0; i < x.length(); i++) if (x[i] == ' ') c++;
    cout << c; 
}