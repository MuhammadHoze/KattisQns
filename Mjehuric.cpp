#include <bits/stdc++.h>

using namespace std;


int main(void){
	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	
	vector <int> num;
	int i, j;
	int temp;  
	
	//To input data into vector
	for(int i=0; i<5; i++){
		int value;
		
		cin >> value;
		num.push_back(value);
	}
	cout << endl;
	
	//BUBBLE SORT
	for (i = 0; i < 4; i++){  
    	for (j = 0; j < 5-i-1; j++){
        	if (num[j] > num[j+1]){
			 
            	swap(num[j], num[j+1]); //swap is a function lib in c++
            	//to display
				for(auto v: num){
		
					cout << v << " " ;
				}
				cout << endl;
			}
			
		}	
	
	}
	
	return 0;
}
