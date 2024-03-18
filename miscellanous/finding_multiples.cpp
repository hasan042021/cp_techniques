#include <bits/stdc++.h>
using namespace std;
#define forI(i, s, n) for (i = s; i <= n; i++)

int main()
{
    int n;
    cin >> n;
    set<int> divisors;
    int k;
    forI(k, 1, sqrt(n))
    {
        if (n % k == 0)
        {
            divisors.insert(k);
            if (k != sqrt(n))
                divisors.insert(n / k);
        }
    }
    for (auto i : divisors)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}