#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
 
int n, x[100000], d[100000], c;
vector<vector<int>> a;
int count = 0;

string print() {
    string s;
    for (int j = 1; j <= n; j++) {
        if (x[j] != j) s += to_string(x[j]) + ' ';
        else return "break";
    }
    return s;
}

void bp(int i) {
    for (int j = 1; j <= n; j++) {
        if (d[j] == 0) {
            d[j] = 1;
            x[i] = j;
            if (n == i) {
                string res = print();
                if (res != "break") {
                    cout << res << endl;
                }
            }
            else bp(i+1);
            d[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    c = 0;
    bp(1);
    return 0;
} 