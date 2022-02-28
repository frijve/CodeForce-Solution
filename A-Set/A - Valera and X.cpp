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

      cin >> n;
      t = n;

      vector<string> S;
      string str, C, K;
      char X, D;

      while (t > 0)
      {
            cin >> str;
            t--;
            S.push_back(str);
      }

      t = n;
      m = (n / 2);
      for (i = 0, j = n - 1; i <= m; i++, j--)
      {

            C = S[i];
            K = S[j];
            if (C.compare(K) != 0)
            {
                  c = -1;
                  break;
            }
      }
      C = S[0];
      X = C[0];
      D = C[1];

      if (X == D)
            c = -1;

      if (c == -1)
      {
            cout << "NO" << endl;
      }
      else
      {
            C = S[m];
            if (C[m] == X)
            {

                  for (i = 0; i < n; i++)
                  {
                        if (i != m)
                        {
                              if (C[i] == D)
                              {
                                    c = 0;
                              }
                              else
                              {
                                    c = -1;
                                    break;
                              }
                        }
                  }
            }
            else
            {
                  c = -1;
            }

            if (c == -1)
            {
                  cout << "NO" << endl;
            }
            else
            {
                  cout << "YES" << endl;
            }
      }
}
