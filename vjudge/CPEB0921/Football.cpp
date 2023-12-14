#include <iostream>
using namespace std;
int main()
{
    string n;
    int a=0,b=0,k=0;
    cin >> n;
    int m=n.length();
    for (int i=0;i<m;i++)
    {
        if (n[i]=='1')
        {
            a+=1;
            if (a==7)
            {
                cout << "YES"<<endl;
                k+=1;
                break;
            }
            b=0;
        }
        else if (n[i]=='0')
        {
            b+=1;
            if (b==7)
            {
                cout << "YES"<<endl;
                k+=1;
                break;
            }
            a=0;
        }
    }
    if (k==0)
    {
        cout << "NO" <<endl;
    }
    return 0;
}