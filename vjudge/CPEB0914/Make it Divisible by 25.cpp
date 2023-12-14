#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string n;
	    cin>> n;
	    int m = n.length();
	    int x = m;
	    for(int i=0; i<m; i++)
	    {
	    	for(int j=i+1; j<m; j++)
	    	{
	    		int N = (n[i]-'0')*10+(n[j]-'0');
	    		if(N%25==0)
	    		{
	    			x = m-i-2;
	    		}
	    	}
	    }
	    cout<<x<<endl;
    }
	return 0;
}