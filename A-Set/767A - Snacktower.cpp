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

      int dp[t + 1] = {0};
      vector<int> v;

      for (i = 0; i < t; i++)
      {
            cin >> x;
            v.push_back(x);
            dp[x] = i + 1;
      }
      count = 1;
      for (i = t; i > 0; i--)
      {
            if (dp[i] > count)
            {
                  x = dp[i] - count;
                  count += x;
                  for (j = 0; j < x; j++)
                  {
                        cout << endl;
                  }
            }
            cout << i << " ";
      }
}
