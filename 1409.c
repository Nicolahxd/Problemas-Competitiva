#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int cont=a+b-2;
	a=a-1;
	b=b-1;
	printf("%d %d\n",cont-a,cont-b);
	return 0;
}