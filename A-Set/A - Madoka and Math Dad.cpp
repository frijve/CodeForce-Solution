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

      cin >> n;

      vector<ll> v;
      if (n <= 2)
            cout << n << endl;
      else
      {
            for (i = 1;; i++)
            {
                  if (i % 2 == 0)
                  {
                        count += 1;
                        v.pb(1);
                  }
                  else
                  {
                        count += 2;
                        v.pb(2);
                  }
                  if (count == n)
                  {
                        break;
                  }

                  if (count > n)
                  {
                        ans = 1;
                        break;
                  }
            }
            if (ans == 1)
            {
                  v.clear();
                  count = 0;
                  for (i = 1;; i++)
                  {
                        if (i % 2 != 0)
                        {
                              count += 1;
                              v.pb(1);
                        }
                        else
                        {
                              count += 2;
                              v.pb(2);
                        }
                        if (count >= n)
                        {
                              break;
                        }
                  }
            }
            for (auto A : v)
            {
                  cout << A;
            }
            cout << endl;
      }
      v.clear();
}

int main()
{
      ll t;
      cin >> t;

      while (t > 0)
      {
            solve();
            t--;
      }
}
