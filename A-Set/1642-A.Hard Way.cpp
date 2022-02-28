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
    int n, b = 0, c = 0, d = 0, i, j, k, q, x, y, z = 0, t, m = -1, mi = 1000, ind;

    cin >> t;

    for (i = 0; i < t; i++)
    {
        c = 0;
        vector<pair<int, int>> v;
        for (j = 0; j < 3; j++)
        {
            cin >> x >> y;
            v.push_back({x, y});
        }
        c = 0;

        if (v[0].second == v[2].second && v[0].second == v[1].second && v[1].second == v[2].second)
        {
            c = 0;
        }
        else if (v[0].second == v[1].second)
        {
            if (v[2].second < v[0].second)
                c = abs(v[0].first - v[1].first);
        }
        else if (v[1].second == v[2].second)
        {
            if (v[0].second < v[1].second)
                c = abs(v[2].first - v[1].first);
        }
        else if (v[0].second == v[2].second)
        {
            if (v[1].second < v[0].second)
                c = abs(v[2].first - v[0].first);
        }

        v.clear();
        cout << c << endl;
    }
}
