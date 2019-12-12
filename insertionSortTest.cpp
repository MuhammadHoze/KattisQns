// C++ program for insertion sort 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to sort an array using insertion sort*/
void insertionSort(vector <int> &number) 
{ 
	int i, key, j; 
	for (i = 1; i < number.size(); i++) 
	{ 
		key = number[i]; //the new card
		j = i - 1; //the cards before new card 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && number[j] > key) 
		{ 
			number[j + 1] = number[j]; 
			j--;
		} 
		number[j + 1] = key; 
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
    insertionSort(number);  
    
    cout<<"Sorted array: \n";  
    
 	for(auto &v: number){
 		
 		cout << v << " ";
	 }
    
    return 0;  
}

