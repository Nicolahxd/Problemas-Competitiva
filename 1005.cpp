#include <cstdio>
#include <algorithm>
//codigo sacado de internet
using namespace std;

int main(){
    int N;
    scanf("%d",&N); //recibe la cantidad de piedras
    
    int w[20];
    for(int i = 0;i<N;++i)
        scanf("%d",&w[i]);// peso de cada una
    
    int ans = 2000000;
    
    for(int i = (1<<(N-1))-1;i>=0;--i){ /*dentro del doble for se calculan las posibilidades de 
                                        combinaciones con desplazamiento de bits hasta encontrar la menor*/
        int aux = 0;
        
        for(int j = 0;j<N;++j)
            if(i & (1<<j)) aux += w[j];
            else aux -= w[j];
        
        ans = min(ans,abs(aux));
    }
    
    printf("%d\n",ans); // imprime la respuesta
    
    return 0;
}