#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int arr[10000];
    long long int n, i, t, j=0, p, l, q;
    cin >> t; 
    while(t){
        t--;
        scanf("%lld %lld",&p,&n);
        q = p-n; 
        l=0;
        if(p==n) printf("Case #%lld: 0\n",j++);
        else{
            printf("Case #%lld:",j++);

            for(i=1;i<=sqrt(q);i++){

                if(q%i==0){
                    arr[l++]= i;
                    if(q/i!=i) arr[l++] = q/i;
                }
            }
            sort(arr,arr+l);
            for(i=0;i<l;i++){
                 if(arr[i]>n) printf(" %lld",arr[i]);
             }
             printf("\n");
        }
    }
    return 0;
}