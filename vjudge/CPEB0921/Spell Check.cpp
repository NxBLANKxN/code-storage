#include <iostream>
using namespace std;
int main ()
{
    int t,n;
    string m;
    cin >> t;
    string T[t];
    while (t>0)
    {
        cin >> n;
        cin >> m;
        for (int i=0;i<n;i++)
        {
            if (n>5 or n<5)
            {
                T[t]="NO";
                break;
            }
            else if ((m[i]-32)>='A')
            {

            }
        }
        t-=1;

    }
    return 0;
}