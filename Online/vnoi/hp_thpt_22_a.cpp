#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n; cin >> n;
    long long count = 0;
    for (int i = 0; i < n.length()-5; i++) {
        if (n[i]=='v' && n[i+1]=='i' && n[i+2]=='r'&&n[i+3]=='u'&&n[i+4]=='s') count++;
    }
    cout << count;
    return 0;
}