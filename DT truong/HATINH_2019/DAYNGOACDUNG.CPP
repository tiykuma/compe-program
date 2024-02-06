#include <bits/stdc++.h>

using namespace std;

int main() {
    string n; cin >> n;
    vector <char> a; 
    int count = 0, res = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '(') a.push_back(n[i]);
        else {
            if (n[i] == ')' && a.size() == 0) {
                count = 0;
                a.clear();
            }
            else {
                a.pop_back();
                count+=2;
                res = max(res, int(count - a.size()));
            }
        }
    }
    cout << res;
}
// ()()((((()))))(())))(((((()))))))))))(((((((((((((()()()()(()()()()()()()()()))))))(((((())))))))))))))))))((((((((((((((((((((((((((())))))()()()()