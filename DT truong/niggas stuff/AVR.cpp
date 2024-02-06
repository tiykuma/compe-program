#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, sum;
int main() {
    cin >> n;
    vector <long long> a, b;
    for (ll i = 0; i < n; i++) {int x; cin >> x; b.push_back(x);}
    a.push_back(b[0]); ll sum = b[0], count = 1;
    for (int i = 1; i < n; i++) {
        a.push_back(b[i]*(i+1)-sum);
        sum+=b[i]*(i+1)-sum;
    }
    for (auto i : a) cout << i <<  " ";
}