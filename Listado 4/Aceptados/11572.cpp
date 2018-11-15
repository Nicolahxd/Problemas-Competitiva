#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x,i;
    map <int, int> m;
    int maximo = 0;
    
    scanf ("%d",&x);
    while (x--){
        int n;
        scanf ("%d",&n);
        int ar[n+10],ant[n+10];
        
        for (i=1;i<=n;i++){
            scanf ("%d",&ar[i]);
            ant[i] = m[ar[i]];
            m[ar[i]] = i;
        }

        i = 1;
        int prev = 1;
 
        for (i=1;i <= n;i++){
            if(ant[i] >= prev){
                maximo = max(maximo,i-prev);
                prev = ant[i]+1;
            }
        }
        maximo = max(maximo,i-prev);
        printf ("%d\n",maximo);
    }
    return 0;
}