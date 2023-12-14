#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, p[31];
    for (int i = 1; i <= 30; i++)
    {
        p[i] = 1 << i;
    }
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n], x[q];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }
        vector<int> P;
        for (auto i : x)
        {
            if (P.size() == 0 || P.back() > i)
            {
                P.push_back(i);
            }
        }
        for (auto i : P)
        {
            int y = 1 << i, z = y / 2;
            for (int j = 0; j < n; j++)
            {
                if (a[j] % y == 0)
                {
                    a[j] += z;
                }
            }
        }
        for (auto i : a)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}