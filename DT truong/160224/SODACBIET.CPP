#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ln "\s"
#define debug(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string max(n, '9');
    string s; cin >> s;
    int index = n;
    int sumN = 0; for (int i = 0; i < n; i++) sumN += s[i] - '0';
    int sum = sumN;
    do {
        index = n-1;
        while(s[index]=='9') {
            s[index] = '0';
            --index;
            sum -= 9;
        }
        s[index] += 1;
        sum += 1;
        if (sum == sumN) {cout << s; return 0;}
    }
    while(s != max);    
    cout << -1;
    return 0;
}