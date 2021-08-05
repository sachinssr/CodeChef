#include <iostream>
using namespace std;

int main() {
 int a, b, c, diff, max=0, winner, temp, sc1=0, sc2=0;
 cin>>a;
 while(a--) {
  cin>>b>>c;
  sc1=sc1+b;
  sc2=sc2+c;
  if(sc1>sc2) {
   diff=sc1-sc2; temp=1;
  }
  else {
   diff=sc2-sc1; temp=2;
  }
  if(diff>max) {
   max=diff; winner=temp;
  }
 }
 cout<<winner<<" "<<max;
 return 0;
}