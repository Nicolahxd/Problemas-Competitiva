#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    while(x--){
        int n;
        cin>>n;
        long long int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long int mayor = arr[0];
        int moneda=1;
        for(int i=1;i<n-1;i++){
            if (mayor+arr[i]<arr[i+1]){
                mayor+=arr[i];
                moneda++;
            }
        }
        moneda++;
        printf("%d\n",moneda);
    }
    return 0;
}