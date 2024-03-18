#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

int main()
{
    int b, p;
    cin >> b >> p;
    ll res = 1;
    while (p)
    {
        if (p % 2 == 0)
        {
            b *= b;
            b %= mod;
            p /= 2;
        }
        else if (p % 2 == 1)
        {
            res *= b;
            res %= mod;
            p--;
        }
    }
    cout << res << endl;

    return 0;
}