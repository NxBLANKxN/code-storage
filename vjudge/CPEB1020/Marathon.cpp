#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n[4], p = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> n[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if (n[0] < n[i])
            {
                p++;
            }
        }
        cout << p << endl;
    }
    return 0;
}