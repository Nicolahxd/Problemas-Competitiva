#include <bits/stdc++.h>
using namespace std; // sacado de internet

int main() {
	int n;
	cin >> n; // se lee el numero de casos
	while (n) {
		map<string, int> log; //se declara el map donde se va a guardar
		int maxN = -1;
		string x[5];

		for (int i = 0; i < n; i++) {
			cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4]; //se guardan los 5 valor asociados al caso
			sort(x, x + 5); // se usa sort para dejarlos ordenados de menor a mayor

			string code;
			for (int j = 0; j < 5; j++) {-
				code += x[j]; // se hace un sumatoria de todos los datos del arreglo
			}


			if (!log.count(code)) {   //se saca el maximo de cada uno y se almacena en la posicion de acuerdo a m en la 1 si esta vacio
				log[code] = 1;
				maxN = max(maxN, 1);
			} else {				
				int m = log[code] + 1;
				log[code] = m;
				maxN = max(maxN, m);
			}
		}

		int count = 0;
		map<string, int>::iterator it;
		for (it = log.begin(); it != log.end(); it++) { // se recorre el map y se sumar sobre el contador
			if (it->second == maxN)
				count += it->second;
		}

		printf("%d\n", count); // se imprime el resultado
	}

	return 0;
}