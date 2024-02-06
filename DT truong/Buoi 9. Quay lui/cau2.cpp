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

int n, a[1000000];

void ghinghiem(int a[])
{
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout<<endl;
}
void bt(int i)
{
    for(int j = 0;j<=1;j++)
    {
        a[i] = j;
        if(i == n) ghinghiem(a);
        else bt(i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    a[0] = 0;
    bt(1);
    return 0;
}