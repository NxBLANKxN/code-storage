#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0;
        cin >> n;
        long int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        sort(m, m + n);
        for (int i = 1; i < n; i++)
        {
            if (m[0] <= m[i])
            {
                a = a + m[i] - m[0];
            }
        }
        cout << a << endl;
    }
    return 0;
}
