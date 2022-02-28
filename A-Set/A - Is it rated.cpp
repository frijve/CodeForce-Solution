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
        cin >> a >> b;
        if (a != b)
            c = 1;
        else
        {
            v.push_back(a);
        }
        n--;
    }
    if (c == 1)
    {
        cout << "rated" << endl;
    }
    else
    {
        for (i = 0; i < (v.size() - 1); i++)
        {

            if (v[i] < v[i + 1])
            {
                c = -1;
                break;
            }
        }
        if (c == -1)
            cout << "unrated" << endl;
        else
            cout << "maybe" << endl;
    }
}