#include <bits/stdc++.h>

using namespace std;

int main(void){
	ios::sync_with_stdio(false); cin.tie(NULL);  // to reduce complexity time
	int n;
	
	cin >> n; //num of names
	//cin.get(); // consumes the /n. USED WHEN INPUT NAMES AFTER ENTERING DATA SET FOR STRINGS!! 
	cin.ignore();
	
	vector<string> names; //1st vector 
	vector <string> copy_names; //2nd vector
	
	
	//To take in data!!
	for(int i=0; i<n; i++){
		string player;
		
		cin >> player; //input a string
		names.push_back(player); //put player name into "names" vector 
			
	}
	
	cout << endl << endl;
	
	// copy the players' names into a 2nd vector called copy_names
	// This vector is used to check for incr/decr. 
	// If vector is decr, the sorting algo will not change the vector. vice versa for incre.
	for(int i=0; i<names.size(); i++){
		
		copy_names.push_back(names[i]);
		
	}		
	//To sort data in increasing order 
	sort(names.begin(), names.end());
		
		if (names == copy_names){
			
			cout << "INCREASING"<<endl;
			
		}
		else{
			
			//To sort data in descending order
			sort(names.begin(), names.end(), greater<string>());  //greater function for descending order
			
			if(names == copy_names){
				
				cout << "DECREASING"<<endl;
			}
			else{
				
				cout <<"NEITHER"<<endl;
			}	
		}
		
	
//	//print out data
//	for(auto v:names){
//		
//		cout << v <<endl;
//	}
//	
		
//	//print out data
//	for(int j=0; j<n; j++){
//		
//		cout << names[j] << endl;
//	}




	return 0;
	
}
