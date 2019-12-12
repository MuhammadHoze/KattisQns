#include <bits/stdc++.h>
using namespace std;

/* 1. iniitalize a pair
   2. cout the pair 
   3. sort the pair and then cout
*/


int main(void){
	
	vector<pair<int,int>> number;
	int n;
	
	cin >> n; // to input the number of tuples
	
	for(int i=0; i<n; i++){
		int value1,value2;

		cin >> value1 >> value2;
		
		number.push_back(make_pair(value1,value2));		
		
	}
	
	cout << endl;
	
	//To diplsay out the pair
	for(int i=0; i<n; i++){
		
		cout << get<0>(number[i]) << " " // first element
             << get<1>(number[i]) << "\n"; // second element
	}
	
	// using lamda expression!! 
	//ASCENDING '<'
	//DESCENDING '>'
	sort(number.begin(), number.end(), [] (const pair<int,int>& x, const pair<int,int>& y){
		
		//compare 2nd element
		if (get<1>(x) != get<1>(y)){ //DEPENDS HOW U WANNA SORT. COMPARE 1ST ELEMENT OR 2ND ELEMENT first  
			return (get<1>(x) < get<1>(y));
		}
		//compare 1st element if 2nd equal
		else
			return (get<0>(x) < get<0>(y));
		
	});
	
	
	cout << endl; 
	
	
	//To diplsay out the pair
	for(int i=0; i<n; i++){
		
		cout << get<0>(number[i]) << " " // first element
             << get<1>(number[i]) << "\n"; // second element
	}
	
	return 0;
}
