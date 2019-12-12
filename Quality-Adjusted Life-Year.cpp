#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	int n;
	cin >> n;
	float total = 0.0;
	
	for(int i=0; i<n; i++){
		float q, y;
		cin >> q >> y;
		total += (q*y);
	}
	
	//this will fix the dp to 3
	cout << fixed << setprecision(3) << total;
	
	
	return 0;
}
