#include <bits/stdc++.h>
using namespace std;


//USING A STACK!! PUSH POP 
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	string input;
	cin >> input;
	string output; // once a letter is typed it gets copied to output string
	
	
	for(int i=0; i<input.size(); i++){
		
		if(input[i] == '<'){
			
			output.pop_back(); //delete last element 
		}
		else
			output.push_back(input[i]);
		
	}
	
	for(auto v:output){
		
		cout << v;
	}
	
	//cout << output << endl; // cout string 
	
	return 0;
}
