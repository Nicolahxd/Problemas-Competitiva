#include <bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    scanf ("%d",&n);
    while (n--){
        int x,y,z;
        scanf ("%d %d %d",&x,&y,&z);
 
        int p [50005];
        int q [50005];
 
        for (int i=0;i<z;i++) scanf("%d %d",&p[i],&q[i]);
        
        sort (p,p+z);
        sort (q,q+z);
        
        if( z%2 ) printf ("(Street: %d, Avenue: %d)\n",p[z/2],q[z/2]);
        else printf ("(Street: %d, Avenue: %d)\n", p [(z-1)/2],q[(z-1)/2]);
    }
    return 0;
}