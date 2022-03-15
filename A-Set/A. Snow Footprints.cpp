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
    ll a, b, c = 0, d, m = 1e9, n, i, j, k, x, y, z, t, r, s, count = 0, ans = 0, l, f, R = 0, L = 0;
    string S;
    vector<ll> v;

    cin >> n;
    cin >> S;

    for (i = 0; i < n; i++)
    {
        if (S[i] == 'R')
            R = 1;
        if (S[i] == 'L')
            L = 1;
    }
    if (R == 1 and L == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (S[i] == 'R')
            {
                if (count == 0)
                {
                    f = i + 1;
                    l = f;
                    count = 1;
                }

                else
                    l = i + 1;
            }
        }
    }
    else if (R == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (S[i] == 'R')
            {
                if (count == 0)
                {
                    f = i + 1;
                    l = f;
                    count = 1;
                }

                else
                    l = i + 1;
            }
        }
        l++;
    }
    else if (L == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (S[i] == 'L')
            {
                if (count == 0)
                {
                    l = i + 1;
                    f = l;

                    count = 1;
                }

                else
                    f = i + 1;
            }
        }
        l--;
    }
    else if (L == 0 and R == 0)
    {
        f = 1;
        r = 1;
    }

    cout << f << " " << l << endl;
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
