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

int count(int x)
{
      return x * (x - 1);
}

int main()
{
      long long int n, b = 0, c = 0, d = 0, i, j, k = 0, q, x, y, z = 0, t, m = -1, mi = 1000, ind;

      cin >> x;
      t = 0;

      for (i = 1, j = 1;; i++)
      {
            n = 1;
            while (x >= (n * 2))
            {
                  n = n * 2;
            }

            x = x - n;
            if (x == 0)
            {
                  cout << i << endl;
                  break;
            }
      }
}