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
      ll a, b, c = 0, d, m = -1, n, i, j, k, l, x, y, z, t, r, s, count = 0, ans = -1;
      string S;
      cin >> n;
      unordered_map<string, int> mp;
      while (n--)
      {
            cin >> S;

            auto A = mp.find(S);
            if (A != mp.end())
            {
                  mp[S]++;
                  cout << S << mp[S] << endl;
            }
            else
            {
                  cout << "OK" << endl;
                  mp[S];
            }
      }
}

int main()
{
      ll t;

      solve();
}
