#include <iostream>
using namespace std;

int main() { 
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	     int ans;
	     int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0;
	    for(int i=0;i<n;i++)
	    {
	        switch (a[i])
	        {
	            case 1:
	             a1++;
	             break;
	            case 2:
	             a2++;
	             break;
	            case 3:
	             a3++;
	             break;
	            case 4:
	             a4++;
	             break;
	            case 5:
	             a5++;
	             break;
	            case 6:
	             a6++;
	             break;
	            case 7:
	             a7++;
	             break;
	            default:
	             break;
	        }
	        if(a1>0 && a2>0 && a3>0 && a4>0 && a5>0 && a6>0 && a7>0)
	        {
	         ans=i+1;
	         break;
	        }
	         
	    }
	    cout<<ans<<endl;
	}
	return 0;
}