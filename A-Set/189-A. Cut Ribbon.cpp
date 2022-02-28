#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, a = 0, b = 0, c = 0, d = 0, i, j, k, x, q, y, z = 0, t, m = 0, s, mi = -1;

    cin >> n >> a >> b >> c;
    m = 0;

    for (i = 0; i <= 4000; i++)
    {
        k = 0;
        for (j = 0; j < 4000; j++)
        {
            k = 0;

            x = (i * a) + (j * b);
            if ((n - x) < 0)
            {
                break;
            }

            if ((n - x) % c == 0)
            {
                k = (n - x) / c;
            }
            x = x + (k * c);
            if (x == n)
                m = max(m, i + j + k);
        }
    }

    cout << m;
}
