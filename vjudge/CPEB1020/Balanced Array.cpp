#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, even = 0, odd = 0;
        cin >> m;
        if (m % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i <= m; i += 2)
            {
                cout << i << " ";
                even += i;
            }
            for (int i = 1; i < m - 2; i += 2)
            {
                cout << i << " ";
                odd += i;
            }
            cout << even - odd << endl;
        }
    }
    return 0;
}