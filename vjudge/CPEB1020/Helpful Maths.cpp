#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, m;
    cin >> n;
    int i = 0, x = 0;
    while (n[i] != '\0')
    {
        for (int j = i; n[j] != '\0'; j++)
        {
            if (n[i] > n[j] && n[j] != '+')
            {
                x = n[i];
                n[i] = n[j];
                n[j] = x;
            }
        }
        i += 2;
    }
    cout << n << endl;
    return 0;
}
