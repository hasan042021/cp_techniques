#include <bits/stdc++.h>
using namespace std;

#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int i, j = 0;
    forI(i, 0, n) cin >> a[i];
    queue<int> q;
    i = 0;
    while (j < n)
    {
        if (a[j] < 0)
            q.push(a[j]);
        if (j >= k - 1)
        {
            if (q.size())
                cout << q.front() << endl;
            else
                cout << 0 << endl;
            if (a[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }

    return 0;
}