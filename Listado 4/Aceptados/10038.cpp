#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int x[3010],y[3010];
	int i;
	while(scanf("%d",&n)==1) {
		m=1;
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
		}
		for(i=0;i<n-1;i++){
			y[i]=abs(x[i+1]-x[i]);
		}
		sort(y,y+i);
		for(i=1;i<n;i++){
			if(y[i]==y[i-1]){
				m=0;
				break;
			}
		}
		if(m==0) printf("Not jolly\n");
		else printf("Jolly\n");
	}
return 0;
}