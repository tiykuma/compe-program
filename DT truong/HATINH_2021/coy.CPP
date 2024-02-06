#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n, a[1000000], s[1000000], D[1000000], HS[1000000];

int main() {
    cin >> n;
    map <int, int> d;
memset(D,0,sizeof(D));
for(int i=0;i<=n;i++) {
int cs = HS[i]+n;
D[cs]++;
}
//Tính kết quả
int ans= 0; // Chứa kết quả bài toán 
for(int cs=0;cs<=2*n;cs++) if (D[cs]>0) ans = ans+D[cs]*(D[cs]-1)/2;
cout<<ans;
}