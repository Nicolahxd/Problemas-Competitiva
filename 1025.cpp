#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int aux;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	int size_T=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size_T);
	
	int medio=(n/2)+1;
	int cont=0;

	for(int i=0;i<medio;i++){
		cont+= (arr[i]/2)+1;
	}
	printf("%d\n",cont);
	return 0;
}
