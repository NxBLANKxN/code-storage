#include <iostream>
using namespace std;
int main()
{
    string m;
    int i;
    cin >> m;
    if (m[0]>='a' && m[0] <= 'z')
    {
        m[0]-=32;
    }
    cout << m;
    return 0;
}