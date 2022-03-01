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

int main()
{
      ll a, b, c = 0, d, m, n, i, j, k, l, x, y, z, t, r, count = 0;

      cin >> t;
      vector<int> v;

      while (t > 0)
      {
            cin >> x;
            v.push_back(x);
            t--;
      }
      t = v.size() - 1;
      for (i = 0; i < v.size(); i++)
      {
            if (i == 0)
            {
                  m = v[i] - v[i + 1];
                  n = v[i] - v[t];
            }
            else if (i == t)
            {
                  m = v[i] - v[i - 1];
                  n = v[i] - v[0];
            }
            else
            {
                  // cout << (v[i] - v[i + 1]) << " " << (v[i] - v[i - 1]) << endl;
                  m = min(abs(v[i] - v[i + 1]), abs(v[i] - v[i - 1]));
                  n = max(abs(v[i] - v[t]), abs(v[i] - v[0]));
            }

            cout << abs(m) << " " << abs(n) << endl;
      }
}
