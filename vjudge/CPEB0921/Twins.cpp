#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long n,sum,i,x=0,y=0;
    while (cin >>n)
    {
        long long a[n];
        sum=0;
        for (i=0;i<n;i++)
        {
            cin >>a[i];
            sum += a[i];
        }
        sum =sum/2;
        sort (a,a+n);
        for (i=n-1;i>=0;i--)
        {
            x+=a[i];
            y++;
            if (x>sum)
            {
                break;
            }
        }
        cout << y << endl ;
    }
    return 0;
}