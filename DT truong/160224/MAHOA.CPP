#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ln "\n"
#define debug(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll y, x;

int main()
{
    clock_t begin = clock();
    freopen("MAHOA.INP", "r", stdin);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> y;
    int digits = 0, t=y; while(t!=0) {t/=10;digits++;}
    x = digits * 10;
    while(true) {
        x++;
        ll temp = x, sum = x;
        while (temp != 0) {
            sum += temp % 10; temp /= 10; 
        }
        if (sum == y) break;
    }
    cout << x;
    clock_t end = clock(); //ghi lại thời gian lúc sau
    cout<<"Time run: "<<(float)(end-begin)/CLOCKS_PER_SEC<<" s"<<endl;
    return 0;
}