#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,x,odd=0;
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        cin>>x;
	        if(x%2!=0)
	        {
	            odd++;
	        }
	    }
	    if(odd%2==0)
	    {
	        cout<<1<<endl;
	    }
	    else
	    cout<<2<<endl;
	}
	return 0;
}
