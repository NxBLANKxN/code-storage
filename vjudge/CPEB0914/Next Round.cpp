#include <iostream>
using namespace std;
int main ()
{
    int k,n,i=0,a=0;
    cin >> k >> n;
    int s[k];
    while (k>i)
    {
       cin >> s[i];
       i+=1;
    }
    for (int j=0;k>j;j++)
    {
        if (n>0 || s[j]==s[j+1])
        {
            if (s[j]>s[j+1])
            {
                a+=1;
                n-=1;
            }
            else if (s[j]==s[j+1] && s[j]>1 && s[j+1]>1)
            {
                a=a+2;
                n-=2;
            }
        }
        else 
        {
            break;
        }
    }
    if (a==0)
    {
        cout << a;
    }
    else if (n==0)
    {
        cout << a;
    }
    else 
    {
        cout <<a+1;
    }
    return 0;
}