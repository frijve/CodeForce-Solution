#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, a = 0, b = 0, c = 0, d = 0, i, j, k, x, q, y, z = 0, t, m, s;

    vector<int> v;
    vector<int> ma;

    cin >> m >> s;

    if (s == 0)
    {
        if (m == 1)
            cout << 0 << " " << 0;
        else
            cout << -1 << " " << -1;
    }

    else if (s > (9 * m))
        cout << -1 << " " << -1;

    else
    {
        for (i = 0; i < m; i++)
        {
            a = min(9, s);
            v.push_back(a);
            s = s - a;
        }

        for (auto &o : v)
        {
            ma.push_back(o);
        }

        reverse(v.begin(), v.end());

        if (v[0] != 0)
        {
            for (auto &o : v)
            {
                cout << o;
            }
        }
        else
        {
            v[0]++;
            for (i = 1;; i++)
            {
                if (v[i] != 0)
                {
                    v[i]--;
                    break;
                }
            }

            for (auto &o : v)
            {
                cout << o;
            }
        }
        cout << " ";
        for (auto &o : ma)
        {
            cout << o;
        }
        cout << endl;
    }
}
