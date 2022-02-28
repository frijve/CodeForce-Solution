// Bismillahir Rahmanir Rahim

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
    int n, b = 0, c = 0, d = 0, i, j, k = 0, q, x, y, z = 0, t, m = -1, mi = 1000, ind;

    cin >> n;
    int dp[3] = {0};
    c = 0;

    while (n > 0)
    {
        cin >> x;

        if (x == 25)
            dp[0]++;
        else if (x == 50)
        {
            dp[1]++;
            if (dp[0] > 0)
                dp[0]--;
            else
                c = -1;
        }
        else if (x == 100)
        {
            dp[2]++;
            if (dp[1] > 0 && dp[0] > 0)
            {
                dp[0]--;
                dp[1]--;
            }
            else if (dp[0] > 2)
            {
                dp[0] = dp[0] - 3;
            }
            else
                c = -1;
        }
        n--;
    }

    if (c == -1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}