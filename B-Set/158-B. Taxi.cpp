#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    long long int n, a = 0, b = 0, c = 0, d = 0, i, j, k, x, y, z = -100;
    long long count = 0;
    cin >> n;

    vector<int> V;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(a);
        if (x == 1)
            a++;
        else if (x == 2)
            b++;
        else if (x == 3)
            c++;
        else if (x == 4)
            d++;
    }

    count += d;
    while (c > 0)
    {
        count++;
        c--;
        if (a > 0)
            a--;
    }
    while (b >= 2)
    {
        count++;
        b = b - 2;
    }
    while (b > 0)
    {
        count++;
        b--;
        if (a > 0)
            a = a - 2;
    }
    while (a > 0)
    {
        count++;
        a = a - 4;
    }

    cout << count;
}