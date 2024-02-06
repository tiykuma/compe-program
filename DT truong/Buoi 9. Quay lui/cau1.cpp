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
 
string a[1000000]; int x[1000000];
int n, k; 

void ghinghiem(int x[])
    {
    for(int i=1; i<=k;i++)
        cout<< a[x[i]-1]<<" ";
    cout<<endl;
    }
void tohop(int i)
{
    for(int j=x[i-1]+1 ; j<=n-k+i ; j++)
    {
        x[i]=j;
        if (i==k) ghinghiem(x);
        else tohop(i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i]; 
    x[0] = 0;
    tohop(1);
    return 0;
}