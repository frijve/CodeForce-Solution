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

      cin >> n >> t >> k >> d;

      if (k >= n)
            cout << "NO" << endl;
      else
      {
            x = n / k;
            if (n % k != 0)
                  x++;
            if ((d + t) < (x * t))
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }
}
