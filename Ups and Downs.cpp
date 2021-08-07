#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int t, n, a[100005], tmp;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        for(int i=1; i<n; i++) {
            if(i%2==0) {
                tmp=a[i];
                a[i]=a[i-1];
                a[i-1]=tmp;
            }
        }
        for(int i=0; i<n; i++) printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}