#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool scp(ll n)
{
    ll k = sqrt(n);
    return k * k == n;
}
bool check(ll n)
{
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i != 1 && scp(i))
                return false;
            if (n / i != i && scp(n/i))
                return false;
        }
    } 
    return n > 1;
}

ll demuoc(ll n)
{
    int cnt = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (check(i))
                cnt++;
            if (n / i != i)
                if (check(n / i))
                    cnt++;
        }
    }
    return cnt;
}

int main()
{
    long long n;
    cin >> n;
    cout << demuoc(n);
}