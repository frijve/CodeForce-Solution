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
      ll a, b, c = 0, d, m = -1, n, i, j, k, x, y, z, t, r, s, count = -1, ans = 0, l;
      ll c1, c2, r1, r2, d1, d2;

      cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
      if (r1 > 18 || r2 > 18 || c1 > 18 || c2 > 18 || d1 > 18 || d2 > 18)
      {
            count = -1;
      }

      else
      {
            for (i = 1; i < 10; i++)
            {
                  if (count == 0)
                        break;
                  for (j = 1; j < 10; j++)
                  {
                        if (count == 0)
                              break;
                        if (i != j && i + j == r1)
                        {
                              for (k = 1; k < 10; k++)
                              {
                                    if (count == 0)
                                          break;
                                    if (j != k && j + k == d2 && i + k == c1 && k != i)
                                    {
                                          for (l = 1; l < 10; l++)
                                          {
                                                if (count == 0)
                                                      break;
                                                if (j != l && k + l == r2 && i + l == d1 && j + l == c2 && l != k && l != i)
                                                {
                                                      cout << i << " " << j << endl;
                                                      cout << k << " " << l << endl;
                                                      count = 0;
                                                      break;
                                                }
                                          }
                                    }
                              }
                        }
                  }
            }
      }
      if (count != 0)
            cout << -1 << endl;
}
int main()
{
      ll t;
      // cin >> t;
      // while (t > 0)
      // {
      solve();
      // t--;
      //}
}
