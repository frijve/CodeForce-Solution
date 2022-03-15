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
      ll a, b, c = 0, d, m = -1, n, i, j, k, x, y, z, t, r, s, count = 0, ans = 0, l;
      string S, S1;
      getline(cin, S);
      // cout << S;
      getline(cin, S1);
      // cout << S1;

      vector<char> v;
      vector<char> v1;
      vector<char> v2;

      for (i = 0; i < S.size(); i++)
      {
            if (S[i] == '|')
                  count = -1;
            else if (count == 0)
                  v1.pb(S[i]);
            else
                  v2.pb(S[i]);
      }
      for (i = 0; i < S1.size(); i++)
      {
            v.pb(S1[i]);
      }

      if (v1.size() == v2.size())
      {
            // cout << "Equal" << endl;
            a = v.size() % 2;
            if (a == 0)
            {
                  for (i = 0; i < v.size(); i++)
                  {
                        if (i % 2 == 0 || i == 0)
                              v1.pb(v[i]);
                        else
                              v2.pb(v[i]);
                  }
                  ans = 1;
            }

            else
                  ans = -1;
      }
      else
      {
            // cout << "Equal" << endl;
            a = v1.size();
            b = v2.size();
            c = v.size();
            if (a > b)
            {

                  d = a - b;
                  c -= d;
                  // cout << "Equal1 " << d << " " << c << endl;
                  if (c % 2 == 0 and c >= 0)
                  {
                        for (i = 0; i < v.size(); i++)
                        {
                              if (i < d)
                                    v2.pb(v[i]);
                              else
                              {
                                    if (i % 2 == 0 || i == 0)
                                          v1.pb(v[i]);
                                    else
                                          v2.pb(v[i]);
                              }
                        }
                        ans = 1;
                  }
                  else
                        ans = -1;
            }
            else if (a < b)
            {
                  d = b - a;
                  c -= d;
                  if (c % 2 == 0 and c >= 0)
                  {
                        for (i = 0; i < v.size(); i++)
                        {
                              if (i < d)
                                    v1.pb(v[i]);
                              else
                              {
                                    if (i % 2 == 0 || i == 0)
                                          v1.pb(v[i]);
                                    else
                                          v2.pb(v[i]);
                              }
                        }
                        ans = 1;
                  }
                  else
                        ans = -1;
            }
      }

      if (ans == 1)
      {
            for (auto &P : v1)
            {
                  cout << P;
            }
            cout << "|";
            for (auto &P : v2)
            {
                  cout << P;
            }
            cout << endl;
      }
      else
            cout << "Impossible" << endl;
}
int main()
{
      ll t, x = 1, y;
      // cin >> t;
      //  while (t > 0)
      //  {

      solve();

      // t--;
      //}
}
