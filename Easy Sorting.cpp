#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,v,d=0;
    int arr[200],arr2[200];
    cin>>i;
    while(i--){
        d++;
        int count=0;
        cin>>v;
        for(int t=0;t<v;t++){
            cin>>arr[t];
        }
        for(int t=0;t<v-1;t++){
            for(int c=0;c<v-1;c++){
                if(arr[c]!=c+1){
                    swap(arr[c],arr[arr[c]-1]);
                    count++;
                    break;
                }
            }
        }
         cout<<"Case "<<d<<": "<<count<<endl;

    }
    return 0;
}