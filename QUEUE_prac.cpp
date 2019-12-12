#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	queue <int> input;
	queue <int> output;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		int value;
		
		cin >> value;
		input.push(value);
		
	}
	
	while(!input.empty()){
		
		cout << input.front() << " ";
		int temp = input.front();
		input.pop();
		output.push(temp);
	}
	
	cout << endl;
	
	while(!output.empty()){
		
		cout << output.front() << " ";
		output.pop();
		
	}
	
	
	
	
	
	return 0;
}
