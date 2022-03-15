// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

#define pb push_back
#define ff first
#define ss second

void solve()
{
    ll a, b, c = 0, d, m = 1e9, n, i, j, k, x, y, z, t, r, s, count = 0, ans = 0, l;
    string S;
    vector<ll> v;

    cin >> n;
    cin >> S;

    for (i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
        if (i != 0 and S[i - 1] == 'R' and S[i] == 'L')
        {
            c = abs(a - v[i - 1]);
            c = c / 2;
            m = min(m, c);
            count = 1;
        }
    }
    if (count == 1)
        cout << m << endl;
    else
        cout << -1 << endl;
}
int main()
{
    ll t, x = 1, y;
    // cin >> t;
    //  while (t > 0)
    //  {

    solve();

    // t--;
    //}
}
