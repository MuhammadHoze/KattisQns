#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;
	cin.get();
	
	//vector <int> digits; //single vector
	vector< pair <int,string> > digits; //pair vector 
	
	for(int i=0; i<n; i++){
		string input;
		
		getline(cin,input);
			
		stringstream check(input);  //to break up the words (input)
		
		string output1; // to store 1st word
		string output2; // to store 2nd word 
		
		check >> output1 >> output2; // breaks the word and store into 2 different outputs
		
			
		if (!isalpha(output1[0])){ // to check if first output[0] is not alpha 
			int value = stoi(output1); // first output is a number
			digits.push_back(make_pair(value/2,output2));
		}
		else{
			int value = stoi(output2); //second output is a number
			digits.push_back(make_pair(value,output1));
	
		}		
		
	}
	
	sort(digits.begin(),digits.end());
	
	
	for(auto v: digits){ //just a copy 
		
		cout << v.second << " " << endl;  // for vector pair, need to indicate (v.first or v.second)
	}
	
	return 0;
}
