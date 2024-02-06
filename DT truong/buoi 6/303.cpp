#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, maxlen = 0, sum = 0, bd=0, kt; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {sum++;if(sum>maxlen){kt=i, bd=i-sum+1;}}
        if (a[i] < 0) {sum=0;}
    }
    for (int i = bd; i <= kt; i++) cout << a[i] << " ";
}