#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int cont=0;
	if(a==1){
		printf("%d\n",a);
		return 0;
	}
	if(a<1){
		for(int i=a;i<2;i++){
			cont+=i;
		}
		printf("%d\n",cont);
	}
	else{
		for(int i=a;i>0;i--){
			cont+=i;
		}
		printf("%d\n",cont);
	}
	return 0;
}