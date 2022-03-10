// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

void solve()
{
    ll a, b, c = 0, d, m = -1, n, i, j, k, l, x, y, z, t, r, s, count = 0;

    vector<ll> v;

    cin >> l >> r >> a;

    if (r / a == l / a)
    {
        x = (r / a) + r % a;
        cout << x << endl;
    }
    else
    {
        if (r % a == a - 1)
            x = r / a;
        else
            x = (r / a) - 1;
        cout << (x + (a - 1)) << endl;
    }
}

int main()
{
    ll a, b, c = 0, d, m = -1, n, i, j, k, l, x, y, z, t, r, s, count = 0;
    cin >> t;

    while (t > 0)
    {
        solve();
        t--;
    }
}
