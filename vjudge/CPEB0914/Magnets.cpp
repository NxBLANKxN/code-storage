#include <iostream>
using namespace std ;
int main ()
{
    int n,m=0;
    cin >> n;
    int a[100000];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (int i=0 ; i<n;i++)
    {
        if (a[i]!=a[i+1])
        {
            m+=1;
        }
    }
    cout << m;
    return 0;
}