#include <stdio.h>
int main(){

    int x,n,cont;
    int i,j;
    char a[110];

    while(scanf("%d",&x)==1){
        for(i=1;i<=x;i++){
            scanf("%d %s",&n,a);
            cont = 0;
            for(j=0;j<n;){
                if(a[j]=='#') j++;
                else{
                    cont++;
                    j+= 3;
                }
            }
            printf("Case %d: %d\n",i,cont);
        }
    break;
    }
    return 0;
}