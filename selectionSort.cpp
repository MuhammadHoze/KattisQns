#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector <int> &number){  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < number.size()-1; i++){  //O(n)  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < number.size(); j++){ //O(n)
        	if (number[j] < number[min_idx])  
            	min_idx = j;  
  		}	
        // Swap the found minimum element with the first element using STL lib
        swap(number[min_idx], number[i]);  
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
	
	//call selectionsort function   
    selectionSort(number);  
    
    cout<<"Sorted array: \n";  
    
 	for(auto &v: number){
 		
 		cout << v << " ";
	 }
    
    return 0;  
}
