#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int c,b;
	double p;
	double percent;
	vector <int> crank;
	vector <double> back;
	vector <double> gear; //divison
	int value;
	
	cin >> c; //crank
	cin >> b; //back
	cin >> p; //cadence
	
	percent = p/100; // if p is int. int / int = int 
	
	for(int i=0; i<c;i++){ //for crank
		
		cin >> value;
		crank.push_back(value);
		
	}
	for(int i=0; i<b; i++){ //for back
		cin >> value;
		back.push_back(value);
	}
	
	for(int i=0; i<crank.size(); i++){ // for combine
		for(int j=0; j<back.size(); j++){
			double combine;
			
			combine = crank[i] / back[j];
			
			gear.push_back(combine);
			
		}
		
	}
	
	sort(gear.begin(), gear.end(), greater <double>());
	
	//int change = 0;
	for(int k=0; k<gear.size()-1; k++){ //to check if MORE THAN P/100
		if(((gear[k] - gear[k+1])/gear[k+1]) > percent){
			
			//change = 1;
			cout << "Time to change gears!";
			return 0; // better than break. 
			//break;
		}	
	}
	
//	if (change == 1){
//	
//		cout << "Time to change gears!";
//	}
//	else
		cout << "Ride on!";
		



		
//	for (auto v:crank){
//		
//		cout << v << " " ;
//	}
//	
//	cout << endl;
//	cout << endl;
//	
//	
//	for (auto v:back){
//		
//		cout << v << " " ;
//	}
//	
//	cout << endl;
//	cout << endl;
//	
	
//	for (auto v:gear){
//		
//		cout <<  v << " " ;
//	}
//	
	
	
	return 0;
}
