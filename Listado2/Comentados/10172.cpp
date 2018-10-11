#include <bits/stdc++.h>
using namespace std; // sacado de internet

int main() {
	int n, s, q, TC;

	cin >> TC; // recibe la cantidad de casos

	for (; TC > 0; TC--) {
		stack<int> carrier;
		queue<int> stationQueue[100]; // se declara la cola y el stack

		cin >> n >> s >> q;

		for (int i = 0; i < n; i++) {
			int nc;
			cin >> nc;
			for (int j = 0; j < nc; j++) { // recibe los datos de cada caso
				int target;
				cin >> target;
				stationQueue[i].push(target - 1); // se ingresan a la queue
			}
		}

		int currPos = 0, time = 0;
		while (true) {
			//se descarga hasta que no se cumpla el while o el estack este vacio
			while (!carrier.empty() && (carrier.top() == currPos || stationQueue[currPos].size() < q)) {
				if (carrier.top() != currPos) {
					stationQueue[currPos].push(carrier.top());
				}
				carrier.pop();
				time++;
			}

			//se carga hasta que el stack este lleno o la cola vacia
			while ((carrier.size() < s) && !stationQueue[currPos].empty()) {
				carrier.push(stationQueue[currPos].front());
				stationQueue[currPos].pop();
				time++;
			}

			bool clear = carrier.empty(); //se vacia es stack
			for (int i = 0; i < n; i++) {
				clear &= stationQueue[i].empty(); // se vacia la cola
			}
			if (clear)
				break;

			//move @ 2 min
			currPos = (currPos + 1) % n;
			time += 2;
		}

		cout << time << endl; // se imprime el tiempo
	}

	return 0;
}