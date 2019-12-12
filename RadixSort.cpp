//Time complexity O(d*(n+b)
//d : the number of digits in a number
//b: base 10 


/*
Each digit can only be from 0-9 of a number. Counting sort is then used to sort the digits accordingly
it is a stable sort algo 
*/

#include <bits/stdc++.h>
using namespace std;

// A utility function to get maximum value in arr[] and to determine how many digits will there be. 
int getMax(int arr[], int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 
  
// A function to do counting sort of arr[] according to 
// the digit represented by exp. 
void countSort(int arr[], int n, int exp) 
{ 
    int output[n]; // output array 
    int i, count[10] = {0}; // initialise a count array to take note of the number of times digit appears
  
    // Store count of occurrences in count[] 
    for (i = 0; i < n; i++) 
        count[ (arr[i]/exp)%10 ]++; 
  
    // Change count[i] so that count[i] now contains actual 
    //  position of this digit in output[] 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    // Build the output array 
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 
  
    // Copy the output array to arr[], so that arr[] now 
    // contains sorted numbers according to current digit 
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 
  
// The main function to that sorts arr[] of size n using  
// Radix Sort 
void radixsort(int arr[], int n) 
{ 
    // Find the maximum number to know number of digits 
    int m = getMax(arr, n); 
  
    // Do counting sort for every digit. Note that instead 
    // of passing digit number, exp is passed. exp is 10^i 
    // where i is current digit number 
    for (int exp = 1; m/exp > 0; exp *= 10) 
        countSort(arr, n, exp); 
} 
  
// A utility function to print an array 
void print(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++){
	
        cout << arr[i] << " "; 
	}
} 
  
// Driver program to test above functions 
int main() 
{ 

	int n;
	//int n = sizeof(arr)/sizeof(arr[0]); if there is already a default array to be used 
	int arr[100];
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> arr[i];
		
	}
    radixsort(arr, n); 
    print(arr, n); //print the original array 
    return 0; 
} 
