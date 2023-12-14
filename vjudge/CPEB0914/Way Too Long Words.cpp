#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int n,a=0;
    string m;
    cin >> n;
    while (n>0)
    {
        cin >> m ;
        a=m.length();
        if (a>10)
        {
            cout << m[0] << a-2 << m[a-1] << endl;
        }
        else
        {
            cout << m << endl;
        }
        n-=1;
    }
    return 0;
}