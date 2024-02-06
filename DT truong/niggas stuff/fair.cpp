#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, s, a[1000000];

int main() {
    int count = 0;
    cin >> n >> s;
    unordered_map <ll, ll> m; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for (auto i : m) {
        if (m[s-i.first] != 0) {
            count++;
            m[s-i.first] = 0; m[i.first]=0;
        }
    }
    cout << 123456789 % count;
}
