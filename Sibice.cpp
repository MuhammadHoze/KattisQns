#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n,width,height;
	
	cin >> n >> width >> height;
	
	for(int i=0; i<n; i++){
		int value_length;
		double accept_length;
		
		cin >> value_length;
		accept_length = sqrt(pow(width,2)+pow(height,2));
		
		if(value_length <= accept_length){
			cout << "DA" << endl;
		}
		else{
			cout << "NE" << endl;
		}
	}

	return 0;
}
