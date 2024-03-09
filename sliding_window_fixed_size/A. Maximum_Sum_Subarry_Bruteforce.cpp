#include <bits/stdc++.h>
using namespace std;

#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int n, k;
    cin >> n >> k;
    int i, j, a[n];
    forI(i, 0, n) cin >> a[i];
    int mx = INT_MIN;
    forI(i, 0, n - k + 1)
    {
        int s = 0;
        forI(j, i, i + k) s += a[j];
        mx = max(mx, s);
    }
    cout << mx << endl;
    return 0;
}