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
      ll a, b, c, d, m, n, i, j, k, l, x, y, z, t, r, count = 0;

      cin >> l >> r;

      if (r - l < 2)
            count = -1;
      else
      {
            if (l % 2 == 0)
                  a = l;
            else
            {
                  a = l + 1;
            }

            b = a + 1;
            c = a + 2;

            if (c > r)
                  count = -1;
      }

      if (count == -1)
            cout << "-1" << endl;
      else
            cout << a << " " << b << " " << c << endl;
}
