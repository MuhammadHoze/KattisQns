#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	
	int n; // no. of integers
	int t; // value togo 
	
	vector <long long> digit;
	
	cin >> n >> t;
	
	for(int i=0; i<n; i++){
		long long value;
		
		cin >> value;
		digit.push_back(value);
		
	}
	
	
	if (t == 1){

	//narrowing down method! 

		int left, right; 
		int sum = 7777;
				
		stable_sort(digit.begin(), digit.end());
		
		left = 0; 
    	right = digit.size() - 1; 
   		while (left < right) { 
        	if (digit[left] + digit[right] == sum) {
			
            	cout << "Yes";
				return 0;
			}
       		else if (digit[left] + digit[right] < sum) 
            	left++; 
            	
        	else // digit[i] + digit[j] > sum 
            	right--; 
   		}
		cout << "No";
		return 0; 
		
		
		
		
		
		
		
		//TAKES O(N^2) time complexity
		
//		for(int i=0; i<digit.size(); i++){
//			for(int j=0;j<digit.size(); j++){
//				
//				if (digit[i] + digit[j] == 7777){
//					
//					cout << "Yes";
//					return 0;
//					
//				}
//			}
//			
//		}
//		cout << "No";
//		return 0;
	}
	
	if (t == 2){
		
		stable_sort(digit.begin(), digit.end());
		
		for(int i=0; i<digit.size()-1; i++){
			
			if(digit[i] == digit[i+1]){
				
				cout << "Contains duplicate";
				return 0;
			}
			
			
		}
		cout << "Unique";
	}
	
	if(t == 3){
		int repeat;
		int count = 1;
		
		repeat = n / 2;
		
		stable_sort(digit.begin(), digit.end());
		
		for(int i=0; i<digit.size()-1; i++){
			
			if(digit[i] == digit[i+1]){
				
				count++;
				//check here straightaway
				if(count > repeat){
					
					cout << digit[i];
					return 0;
				}
			}
			else
				count = 1; // reset back to 1	
		}
		
		cout << "-1";
	}
	
	if(t == 4){
		
		stable_sort(digit.begin(), digit.end());
		
		if (n % 2 == 0){
			
			cout << digit[(n/2) - 1] << " " << digit[n/2] ;
			
			
		}
		else 
			cout << digit[n/2];
		
	}
	
	if (t == 5){
		
		vector <long long> accepted;
		
		stable_sort(digit.begin(), digit.end());
		
		for(int i=0; i<digit.size(); i++){
			
			if(digit[i] >= 100 && digit[i] <= 999){
				
				accepted.push_back(digit[i]);
				
			}
		}
		
		for(auto v: accepted){
			
			cout << v << " " ;
		}
		
	}
	return 0;
}
