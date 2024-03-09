#include <bits/stdc++.h>
using namespace std;

#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int i;
    forI(i, 0, n) cin >> a[i];
    int mx = INT_MIN, j = 0, s = 0;
    i = 0;
    while (j < n)
    {
        s += a[j];
        if (j >= k - 1)
        {
            mx = max(mx, s);
            s -= a[j];
            i++;
        }
        j++;
    }
    cout << mx << endl;
    return 0;
}