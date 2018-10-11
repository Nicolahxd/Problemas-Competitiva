#include <bits/stdc++.h>
//este codigo lo hice casi todo yo pero, para que lo aceptara el juez tuve que buscar algunas partes de internet, se comentara lo que faltaba.
using namespace std;

int verifica(int n){
	stack <int> sale; 
	stack <int> llega;
	int aux, x;

	bool num = true;
	aux = n;
	
	for(int i=0; i<n; i++){
		cin >> x;
		if(x == 0){
			cout << endl;
			return 3;
		}else sale.push(x);
	}
	

	while(num && aux!=0){
		if(llega.empty()){
			if(sale.empty() && aux==0) num = false;
			else{
				llega.push(sale.top());
				sale.pop();}
		}else{
			if(llega.top() == aux){
				llega.pop();
				aux--;
			}
			else if(sale.empty() || aux==0) num = false; // caso en que la pila de salida esta vacia y el contador en 0
			else if(!sale.empty()){
				llega.push(sale.top());
				sale.pop();}
		}
	}
	return num;
}

int main(){
	int cant, x;
	cin >> cant;
	while(1){
		x = verifica(cant);
		if(x == 3){
			cin >> cant;
			if (cant == 0) return 0;
		} 
		else  x ? cout << "Yes" << endl : cout << "No" << endl; // correcta impresion de los Yes o No de la funcion
	}
}