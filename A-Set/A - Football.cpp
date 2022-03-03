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
      ll a, b, c = 0, d, m = 0, n, i, j, k, l, x, y, z, t, r, count = 0;
      vector<string> v;
      string S;
      // int Goal[2] = {0};

      cin >> n;
      x = n;

      while (n > 0)
      {
            cin >> S;

            if (v.size() == 0)
            {
                  v.push_back(S);
            }
            else if (v.size() == 1 && v[0].compare(S) != 0)
            {
                  v.push_back(S);
            }
            if (v[0].compare(S) == 0)
                  count++;
            n--;
      }

      if (count > (x - count))
            cout << v[0] << endl;
      else
            cout << v[1] << endl;

      // cout << count << " " << v[0] << "" << v[1] << endl;
}
