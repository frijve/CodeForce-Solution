// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

#define pb push_back
#define ff first
#define ss second

void swap(ll *x, ll *y)
{
      ll temp;
      temp = *x;
      *x = *y;
      *y = temp;
}

void solve()
{
      ll a, b, c = 0, d, m = -1, n, i, j, k, x, y, z, t, r, s, count = 0, ans = 0, l;

      vector<ll> v;
      ll dp[1001] = {0};

      cin >> n;
      for (i = 0; i < n; i++)
      {
            cin >> x;
            v.push_back(x);
            dp[x]++;
            count = max(dp[x], count);
      }
      if (count == n and n > 1)
      {
            cout << "NO" << endl;
      }
      else if (count <= 3)
      {
            cout << "YES" << endl;
      }
      else if (n % 2 == 0)
      {
            x = n / 2;
            if (count <= x)
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }
      else
      {
            x = (n / 2) + 1;
            if (count <= x)
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }
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
