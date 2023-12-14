#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int i = 1;
        cout << n[0];
        while (n[i] != '\0')
        {
            if (n[i] == n[i + 1])
            {
                cout << n[i];
                i += 2;
            }
            else
            {
                cout << n[i];
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}