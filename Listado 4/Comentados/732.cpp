#include<iostream>
#include<vector>
#include<stack> // se agregan las bibliotecas necesarias
using namespace std;
string a, b;
vector<bool> v;
stack<char> s; // se declaran los vector y stack con los que se implementará el dfs
int i;
void dfs( int x, int y ){ // funcion del dfs con arrgumento de la psocion de inicio que se va a recorrer
	if( x==a.size() && y==b.size() ){ // aca se recorrer en arreglo para saber si va a imprimir una 
				          // "i" o "o"
		cout << (v[0]?'i':'o');
		for( i=1; i<v.size(); ++i ){
			cout << ' ' << (v[i]?'i':'o');
		}
		cout << endl;
		return;
	}

	if( x<a.size() ){ // se realiza el push en el stack y se lanza denuevo el dfs con respecto a las filas
		v.push_back(1);
		s.push(a[x]);
		dfs(x+1,y);
		v.pop_back();
		s.pop();
	}
	
	if( !s.empty() && y<b.size() && s.top()==b[y] ){ // aca se ve si es posible sacar o hacer pop de los elementos del stack
							 // y se lanza el dfs tambien pero en sentido de las columnas
		v.push_back(0);
		char c = s.top();
		s.pop();
		dfs(x,y+1);
		s.push(c);
		v.pop_back();
	}
}
int main(){
	while( cin >> a >> b ){  // se ingresan los valores de a y b siempre que sean distintos de 0,0
		v.clear();
		cout << "[\n"; // imprime el corchete inicial
		dfs(0,0);
		cout << "]\n";// imprime el corchete final
	}
}
