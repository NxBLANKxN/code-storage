#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k[1001];
    int j = 0;
    for (int i = 1; j < 1000; i++)
    {
        if (i % 3 != 0)
        {
            if (i % 10 != 3)
            {
                k[j] = i;
                j += 1;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << k[n - 1] << endl;
    }
    return 0;
}