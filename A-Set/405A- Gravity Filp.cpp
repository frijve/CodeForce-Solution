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

    vector<int> v;

    while (n > 0)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (auto &p : v)
    {
        cout << p << " ";
    }
    cout << endl;
}