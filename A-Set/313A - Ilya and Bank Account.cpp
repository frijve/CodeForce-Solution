// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
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
    long long int n, a, b = 0, c = 0, d = 0, i, j, k = 0, q, x, y, z = 0, t, m = -100000000, mi = 1000, ind;

    cin >> n;

    if (n < 0)
    {
        a = n % 10;
        n = n / 10;
        m = max(n, m);
        b = n % 10;
        n = n / 10;
        n = (n * 10) + a;

        m = max(m, n);

        cout << m << endl;
    }
    else
        cout << n << endl;
}