#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	int c;
	vector <string> word;
	
	
	
	cin >> n >> c;
	//cin.get();
	

	while( n != 0 && c != 0){
		
		for(int i=0; i<n; i++){ // number of words
			for(int i=0; i<c; i++){ // number of letters per word
				string value;
				
				cin >> value;
				word.push_back(value);
			}
		}
		
		cin >> n >> c;
		//cin.get();
	
	}
	
	cout << endl;
	cout << endl;
	
	for(auto v: word){
		
		cout << v << endl;
		
	}
	
	
	
	
	
	
	
	return 0;
}
