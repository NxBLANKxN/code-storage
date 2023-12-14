#include <bits/stdc++.h>
using namespace std;
string canConstruct(int sum)
{
    if (sum % 3)
    {
        return "No";
    }
    return "Yes";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, sum = 0;
        cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
            while (m[i])
            {
                sum += m[i] % 10;
                m[i] /= 10;
            }
        }
        string ans = canConstruct(sum);
        cout << ans << endl;
    }
    return 0;
}
