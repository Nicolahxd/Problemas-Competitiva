#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double arr[131072];
	unsigned long long aux;
	int cont=0;

	while(scanf("%llu",&aux)!=EOF){
		arr[cont]=(double) sqrt(aux + 0.0);
		cont++;
	}
	
	for(int i=cont-1;i>-1;i--){
		printf("%.4lf\n",arr[i]);
	}
	
	return 0;
}