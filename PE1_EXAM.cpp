#include <bits/stdc++.h>
using namespace std;

char nth_letter(long long x){	

    char symbol = (char)('a' + (x%26));
    return symbol;
}

int main(void){
	
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n; //no. of integers 
	int t; // the value determines what is done 
	vector <long long> number;
	
	cin >> n >> t;
	
	//To input in values
	for(int i=0; i<n; i++){
		long long value;
		
		cin >> value;
		number.push_back(value);
	}
	
	if(t == 1){
		
		cout << "7" << endl;
	}
	
	else if (t == 2){
		
		
		if(number[0] > number[1]){
			
			cout << "Bigger" <<endl;
		}
		else if(number[0] == number[1]){
			
			cout << "Equal" <<endl;
		}
		else
			cout << "Smaller" << endl;
	}
	
	else if (t == 3){
		
		//NEED TO SORT THIS!!! 
		sort(number.begin(), number.end() + 3);
		
		cout << number[1];
	}
	
	else if (t == 4){
		long long sum = 0;
		
		for(int i=0; i<number.size(); i++){
			
			sum += number[i];
		}
		
		cout << sum << endl;
	}
	
	else if (t == 5){
		long long sum = 0;
		for(int i=0; i<number.size(); i++){
			
			if(number[i] % 2 == 0){
				
				sum += number[i];
			}
		}
		cout << sum << endl;
	}
	
	else if (t == 6){
		
		vector <char> alphabet;
		for(int i=0; i<number.size(); i++){
			char value;
		
			value = nth_letter(number[i]);
			alphabet.push_back(value);
		}
		for(auto v:alphabet){
			
			cout << v;
		}
	}
		
	else if (t==7){
		long long value;
		long long counter = 0;
		value = number[0];

		while(value < n && counter <= n){ 
				
			value = number[value];
			counter++;
				
			if(value == n-1){
				cout <<"Done" << endl;
				return 0; // stop everything 
			}
		}
		if (value > n-1){
			cout << "Out" << endl;
			return 0;
		}
		else{
		
			cout << "Cyclic" << endl;
			return 0;
		}	
	}
	return 0;	
}	
