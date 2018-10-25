#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin>>n;
    
    int arr[n]= {0};
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cin>>q;
    }

    int b[q]= {0};
    for(int i=0; i<q; i++){
        cin>>b[i];
    }
    int min,max;
    for(int i=0; i<q; i++){
        min=lower_bound(arr,arr+n,b[i])-arr-1;
        max=upper_bound(arr,arr+n,b[i])-arr;

        if(min>0 && max>=n) printf("%d X\n",arr[min]);

        else if(min>=0 && min<n && max>=0 && min<n) cout<<arr[min]<<" "<<arr[max]<<endl;

        else if(min<0 && max<n) printf("X %d\n",arr[max]);

        else printf("X X\n");
    }

    return 0;
}