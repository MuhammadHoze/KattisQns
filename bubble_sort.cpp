#include <bits/stdc++.h>
using namespace std;


// A function to implement bubble sort  
void bubbleSort(vector <int> &number){  
    int i, j;  
    for (i=0; i<number.size()-1; i++){
    	// Last i elements are already in place  
    	for (j=0; j<number.size()-i-1; j++) {
		
        	if (number[j] > number[j+1])  
		    	swap(number[j], number[j+1]);  // STL library for swap 
		    	
		}
	}
}


int main(void){  


	vector <int> number;
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		int value;
		
		cin >> value;
		
		number.push_back(value);
	}
	
	//call bubblesort function   
    bubbleSort(number);  
    
    cout<<"Sorted array: \n";  
    
 	for(auto &v: number){
 		
 		cout << v << " ";
	 }
    
    return 0;  
}
