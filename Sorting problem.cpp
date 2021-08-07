#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
        ll n,k;
         cin>>n>>k;
          ll v[n];
         for(int i=0;i<n;i++){
           cin>>v[i];
         }
         ll f = v[k-1];
         sort(v, v+n);
         for(int i=0;i<n;i++){
           if(v[i] == f){
             cout<<i+1<<endl;
              break; 
           }  
         }
       }
	return 0;
}
