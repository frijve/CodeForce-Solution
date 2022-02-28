// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n, a, b = 0, c = 0, d = 0, i, j, k = 0, q, x, y, z = 0, t, m = -1, mi = 1000, ind;

    cin >> n;
    int v[100005];
    // int dp[100005] = {0};
    // vector<int> v;
    vector<int> dup;
    vector<int> dp;
    int ans[2] = {1, 1};

    c = 1;
    int r = 1;
    j = 0;
    int L = -1;
    int R = -1;

    for (i = 0; i < n; i++)
    {
        cin >> a;
        v[i] = a;
        dup.push_back(a);
        dp.push_back(0);
        if (i > 0)
        {
            if (a < v[i - 1])
            {

                dp[i - 1] = 1;
                dp[i] = 1;
                r++;
            }
            else
                c++;
        }
    }

    if (c == n)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
    }
    else if (r == n)
    {
        cout << "yes" << endl;
        cout << 1 << " " << n;
    }
    else
    {
        sort(dup.begin(), dup.end());
        int rev = 0;
        // cout << "ok";
        for (i = 0; i < n; i++)
        {

            if (dp[i] == 0 && R > -1 && rev < 1)
            {
                rev++;
            }

            else if (dp[i] == 1)
            {
                if (rev > 0)
                {
                    rev++;
                }
                if (rev == 0)
                {
                    if (L == -1)
                        L = i;
                    else
                        R = i;
                }
            }

            if (rev > 1)
            {
                break;
            }
        }
        // reverse(v + 0, v + 1 + 1);
        reverse(v + L, v + R + 1);

        for (i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cout << "no" << endl;
                c = -1;
                break;
            }
            else
                c = 0;
        }
        if (c == 0)
        {
            cout << "yes" << endl;
            cout << L + 1 << " " << R + 1 << endl;
        }
    }
}