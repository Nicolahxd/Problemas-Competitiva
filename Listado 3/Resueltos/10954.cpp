#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	while (scanf("%d", &n), n){

		priority_queue<int, vector<int>, greater<int> > q;
		while (n--) {
			int x;
			scanf("%d", &x);
			q.push(x);
		}

		int total = 0, costo = 0;
		while (q.size() > 1) {
			total = q.top();
			q.pop();
			total += q.top();
			q.pop();
			costo += total;
			q.push(total);
		}

		printf("%d\n", costo);
	}

	return 0;
}