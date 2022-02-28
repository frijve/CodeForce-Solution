#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    long long int n, a, b, c = -1, i, j, k, x = 0, y, z = -100;
    long long count[100005] = {0};
    cin >> n;

    vector<int> V;

    for (i = 0; i < n; i++)
    {
        cin >> a;
        V.push_back(a);
        count[a]++;
        c = max(c, a);
    }

    long long count2[100005] = {0};
    count2[1] = count[1];

    for (i = 2; i <= 100000; i++)
    {
        count2[i] = max(count2[i - 1], count2[i - 2] + i * count[i]);
    }

    cout << count2[100000];
}