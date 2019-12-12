#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	
//	vector < vector<string> > matrix;
	vector <string> matrix;
	int n;
	cin >> n;
	cin.ignore();
		
	for(int j=1; j<n+1; ++j){ // row
	
	//	vector<string> row;
		//for(int k=0; k<n; ++k){ // col
				
			string value;
	
			 	//cin.ignore();
			getline(cin,value);
		
			//cin >> value;
			matrix.push_back(value);
		//}
		//matrix.push_back(row);	
		//cin.ignore();
	}
		

	cout << endl;
	
//	//for printing
//	cout << endl;
//	for(int j=0; j<n; ++j){
//		
////		for(int k=0; k<n; ++k){
////			
////			cout << matrix[j][k] ;
////		}
//
//		cout << 
//		//cout << endl;
//		
//	}
		
		
	for(auto v : matrix){
		
		cout << v  << endl;
	}

	
	
	
	
	return 0;
}
