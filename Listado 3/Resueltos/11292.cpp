#include <bits/stdc++.h>
using namespace std;

int arr1[20001], arr2[20001];

int main() {
	int x,y;
	while (scanf("%d%d", &y, &x) == 2 && x){

		for (int i=0;i<y;i++){
			scanf("%d",&arr2[i]);
		}
		for (int i=0;i<x;i++){
			scanf("%d", &arr1[i]);
		}

		sort(arr1,arr1+x); 
		sort(arr2,arr2+y);
		int ret=0,ulti=0;
		
		for (int i=0;i<x && ulti<y;i++){
			if (arr1[i] >= arr2[ulti]){
				ret += arr1[i];
				ulti++;
			}
		}
		if (ulti < y) printf("Loowater is doomed!\n");
		else printf("%d\n", ret);
	}
	return 0;
}