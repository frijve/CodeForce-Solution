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
    int n, a = 0, b = 0, c = 0, d = 0, i, j, k, q, y, z = 0, t, m = 0, mi = 1000;

    double x;

    cin >> n >> m >> a >> b;

    // mi = -1;

    x = (double)b / (double)m;

    if (x > a)
    {
        c = n * a;
    }
    else
    {

        if (m > n && b < n * a)
        {
            c = b;
        }
        else
        {
            i = n / m;
            n = n - (m * i);

            if (a < b)
            {
                c = (i * b) + n * a;
            }
            else
            {
                if (n != 0)
                {
                    i++;
                }
                c = (i * b);
            }
        }
    }

    cout << c << endl;
}
