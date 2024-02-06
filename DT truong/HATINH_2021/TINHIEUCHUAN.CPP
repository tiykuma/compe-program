#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n, a[1000000], s[1000000];

int main() {
    s[1000000] = {0};
    unordered_map <int, int> d;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) s[i+1] = s[i]+1;
        else s[i+1]=s[i]-1;
    }
    for (int i = 1; i <= n; i++) {d[s[i]]++;}
    int count = 0;
    for (auto i : d) cout << i.first <<  ' ' << i.second << ' ';
    cout << count;
}