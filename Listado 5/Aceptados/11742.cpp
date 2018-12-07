#include <bits/stdc++.h>
using namespace std;

int encontrar(int p, int arr[]) {
	int i;
	for (i = 0; i < 8; i++) {
		if (arr[i] == p) break;
	}
	return i;
}

int main() {
	int n, m;
	int arr[20][3];

	while (scanf("%d %d", &n, &m), n || m) {
		for (int i = 0; i < m; i++) {
			scanf("%d %d %d", &arr[i][0], &arr[i][1],&arr[i][2]);
		}

		int arr[8] = { 0, 1, 2, 3, 4, 5, 6, 7};

		int total = 0;
		do {
			bool aux = true;
			for (int i = 0; i < m; i++) {
				int pos1 = encontrar(arr[i][0], arr);
				int pos2 = encontrar(arr[i][1], arr);
				if (arr[i][2] > 0) {
					if (abs(pos1 - pos2) > arr[i][2]) {
						aux = false;
						break;
					}
				}
				if (arr[i][2] < 0) {
					if (abs(pos1 - pos2) < (-arr[i][2])) {
						aux = false;
						break;
					}
				}
			}

			if (aux) total++;
		} while (next_permutation(arr, arr + n));

		printf("%d\n", total);
	}

	return 0;
}