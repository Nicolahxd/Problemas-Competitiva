#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y,x1,y1;
	while(1){
		 cin >> n;
		 if(n==0) return 0;
		 cin >> x >> y;
		 for(int i=0; i<n; i++){
		 	cin >> x1 >> y1;
		 	if(x1==x || y1==y) cout<< "divisa" << endl;
		 	else if(x1>x && y1>y) cout<< "NE" << endl;
		 	else if(x1>x && y1<y) cout<< "SE" << endl;
		 	else if(x1<x && y1>y) cout<< "NO" << endl;
		 	else if(x1<x && y1<y) cout<< "SO" << endl;
		 }
	}
	return 0;
}
