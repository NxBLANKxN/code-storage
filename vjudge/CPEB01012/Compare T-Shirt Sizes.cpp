#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 50, y = 50, c, d;
        string n, m;
        cin >> n >> m;
        c = n.length();
        d = m.length();
        if (n[c - 1] == 'L')
        {
            x += c;
        }
        else if (n[c - 1] == 'M')
        {
            x = 50;
        }
        else
        {
            x -= c;
        }
        if (m[d - 1] == 'L')
        {
            y += d;
        }
        else if (m[d - 1] == 'M')
        {
            y = 50;
        }
        else
        {
            y -= d;
        }
        if (x == y)
        {
            cout << '=' << endl;
        }
        else if (x > y && n[c - 1] == 'S' && m[d - 1] == 'S')
        {
            cout << '>' << endl;
        }
        else if (x < y && n[c - 1] == 'S' && m[d - 1] == 'S')
        {
            cout << '<' << endl;
        }
        else if (x > y)
        {
            cout << '>' << endl;
        }
        else
        {
            cout << '<' << endl;
        }
    }
    return 0;
}