#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int n, a = 0, b = 0, c = 0, d = 0, i, j, k, x, q, y, z = -100, t;

    vector<long long int> v;
    vector<long long int> dp;
    cin >> t;

    for (i = 0; i < t; i++)
    {
        cin >> n;

        for (j = 0; j < n; j++)
        {

            cin >> a;

            v.push_back(a);
            dp.push_back(0);

            if (j > 0)
            {
                if (v[j] > v[j - 1])
                    dp[j] = 1;
                if (v[j - 1] <= v[j])
                    dp[j - 1] = 0;
            }

            d = 0;
        }
        for (j = 1; j < n; j++)
        {

            if (dp[j] == 0 && dp[j - 1] == 1)
            {
                d++;
                if (j == n - 1)
                {
                    v[j] = v[j - 1];
                    dp[j - 1] = 0;
                }

                else
                {
                    v[j] = max(v[j - 1], v[j + 1]);
                    dp[j - 1] = 0;
                    dp[j + 1] = 0;
                }
            }
        }

        cout << d << "\n";

        for (auto &f : v)
        {
            cout << f << " ";
        }
        cout << endl;
        d = 0;
        v.clear();
        dp.clear();
    }
}
