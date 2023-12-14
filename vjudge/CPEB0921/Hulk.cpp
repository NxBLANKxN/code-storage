#include <iostream>
using namespace std;
int main ()
{
    int n;
    string a= "I hate",b="I love",c=" that ",d=" it",m;
    cin >> n;
    while (n)
    {
        if (n%2==0)
        {
            n-=2;
            if (n==0)
            {
                m=m+a+c+b+d;
                break;
            }
            else
            {
                m=m+a+c+b+c;
            }
        }
        else 
        {
            while (n)
            {
                if (n==1)
                {
                    m=m+a+d;
                    break;
                }
                else
                {
                    m=m+a+c+b+c;
                }
                n-=2;
            }
            break;
        }
    }
    cout << m << endl ;
    return 0;
}
