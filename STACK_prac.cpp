#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	int n;	
	stack <int> input;
	stack <int> output;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int value;

		cin >> value;		
		input.push(value);
	}
	
	// to print out elements in input stack
	while(!input.empty()){
		
		cout << "input:";
		cout << input.top() << " ";
		
		// set a variable temp and push it into output stack
		int temp = input.top();
		input.pop();
		output.push(temp);

		
	}
	
		cout << endl;
	

	
	//to print out elements from output stack
	while(!output.empty()){
		
		cout << "output:";
		cout << output.top() << " "; // print and pop 
		output.pop();
	}
	
	
	
	return 0;
}
