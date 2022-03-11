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

      cin >> n >> m;
      ll table[n][m];
      for (i = 0; i < n; i++)
      {
            cin >> S;
            for (j = 0; j < m; j++)
            {
                  table[i][j] = S[j] - 48;
            }
      }
      /*for (i = 0; i < n; i++)
      {

            for (j = 0; j < m; j++)
            {
                  cout << i << " " << j << ": " << table[i][j] << " " << endl;
            }
            cout << endl;
      }*/

      for (i = 0; i < n - 1; i++)
      {
            for (j = 0; j < m - 1; j++)
            {
                  x = table[i][j] + table[i + 1][j] + table[i][j + 1] + table[i + 1][j + 1];

                  if (x == 3)
                  {
                        count = 1;
                        break;
                  }
            }
            if (count == 1)
                  break;
      }
      if (count == 1)
            cout << "NO" << endl;
      else
            cout << "YES" << endl;
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
