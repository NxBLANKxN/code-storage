#include <iostream>
using namespace std;
int main ()
{
    int n,x=0;
    string m;
    cin >> n;
    for (int i=0;i<n;++i)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if (a==1 && b==1 && c==0)
        {
            x+=1;
        }
        else if (a==1 && b==0 && c==1)
        {
            x+=1;
        }
        else if (a==1 && b==1 && c==1)
        {
            x+=1;
        }
        else if (a==0 && b==1 && c==1)
        {
            x+=1;
        }
    }
    cout << x << endl;
    return 0;
}
