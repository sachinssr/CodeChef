#include <iostream>
using namespace std;

int main() {
 int t, n, c, ak, i;
 cin>>t;
 while(t--) {
  cin>>n>>c;
  ak=0;
  while(n--) { cin>>i; ak=ak+i; }
  if(ak<=c) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
 }
 return 0;
}
