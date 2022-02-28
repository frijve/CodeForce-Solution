#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    long long int n, a = 0, b = 0, c = 0, d = 0, i, j, k, x, q, y, z = -100;

    long long G[100005] = {0};
    long long X[100005] = {0};
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        X[x]++;
    }

    for (i = 1; i < 100002; i++)
    {
        G[i] = X[i] + G[i - 1];
    }

    cin >> q;

    for (i = 0; i < q; i++)
    {
        cin >> x;
        if (x > 100000)
            cout << G[100001] << endl;
        else
            cout << G[x] << endl;
    }
}