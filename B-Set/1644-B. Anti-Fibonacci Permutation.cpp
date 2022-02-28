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
    int n, a = 0, b = 0, c = 0, d = 0, i, j, k, x, q, y, z = 0, t, m = 0, mi = -1;

    vector<int> v;

    cin >> t;

    for (i = 0; i < t; i++)
    {
        cin >> n;

        for (j = n; j > 0; j--)
        {
            v.push_back(j);
        }
        for (auto &M : v)
        {
            cout << M << " ";
        }
        cout << endl;

        for (j = 0; j < n - 1; j++)
        {
            swap(v[j], v[j + 1]);
            for (auto &M : v)
            {
                cout << M << " ";
            }
            cout << endl;
            swap(v[j], v[j + 1]);
        }

        v.clear();
    }
}
