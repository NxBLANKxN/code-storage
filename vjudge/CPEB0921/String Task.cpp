#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string n,a;
    int t=0;
    cin >> n;
    int m=n.length();
    for (int i=0;i<m;i++)
    {
        if (n[i]=='A'|| n[i]=='a' ||
            n[i]=='O'|| n[i]=='o' ||
            n[i]=='Y'|| n[i]=='y' ||
            n[i]=='E'|| n[i]=='e' ||
            n[i]=='U'|| n[i]=='u' ||
            n[i]=='I'|| n[i]=='i')
        {
        }
        else
        {
            if ((n[i]-32)>='A' && (n[i]-32)<='Z')
            {
                a+='.';
                a+=n[i];
                t++;
            }
            else
            {
                a+='.';
                a+=(n[i]+32);
                t++;
            }
        }
    }
    cout << a << endl;
    return 0;
}