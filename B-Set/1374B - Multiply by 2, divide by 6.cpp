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
    long long int n, a, b = 0, c = 0, d = 0, i, j, k = 0, q, x, y, z = 0, t, m = -100000000, mi = 1000, ind, count;

    cin >> t;

    while (t > 0)
    {
        cin >> n;

        for (i = 0;; i++)
        {
            if (n == 1)
            {
                cout << i << endl;
                break;
            }
            else
            {
                if (n % 6 == 0)
                    n = n / 6;
                else if ((n * 2) % 6 == 0)
                {
                    n = n * 2;
                }
                else
                {
                    cout << "-1" << endl;
                    break;
                }
            }
        }
        // cout << count << endl;
        t--;
    }
}