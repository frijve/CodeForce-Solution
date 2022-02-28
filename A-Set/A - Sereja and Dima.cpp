// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, a, b = 0, c = 0, d = 0, i, j, k = 0, q, x, y, z = 0, t, m = -100000000, mi = 1000, ind, count, even, odd;

    cin >> n;

    int sereja = 0, Dima = 0;

    vector<int> v;

    while (n > 0)
    {
        cin >> a;
        v.push_back(a);
        n--;
    }

    for (i = 1; v.size() > 0; i++)
    {
        if (i % 2 == 0)
        {
            // cout << i << "D";
            x = max(v.front(), v.back());
            Dima = x + Dima;
            if (x == v.front())
                v.erase(v.begin());
            else
                v.pop_back();
        }
        else
        {
            // cout << i << "S";
            x = max(v.front(), v.back());
            sereja = x + sereja;
            if (x == v.front())
                v.erase(v.begin());
            else
                v.pop_back();
        }
    }

    cout << sereja << " " << Dima << endl;
}