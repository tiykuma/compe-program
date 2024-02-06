#include <bits/stdc++.h>

using namespace std;

int main() {
    string n; cin >> n;
    for (int i = 0; i < n.length(); i++) {
        if (!(n[i] == '0' || n[i] == '2' || n[i] == '4' || n[i] == '6' || n[i] == '8')) {
            cout << "Khong phai la so sieu chan.";
            return 0;
        }
    }  
    cout << "So sieu chan.";
}