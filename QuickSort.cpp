//Time complexity: O(nlogn)


// ARRAY METHOD 

#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int s, int e){
	
	int i = s-1;
	
	int pivot = a[e]; // set last element as pivot
	for(int j=s; j<e; j++){ // for loop till one before end
		if(a[j] < pivot){
			i++; //increment and swap
			swap(a[i],a[j]);
		}
	}
	//Bring the pivot element in between Region 1 and 2
	swap(a[i+1], a[e]); //swap the pivot with i+1
	return i+1; //return pivot POSITION!! (not value!)
	
}


void quickSort( int a[], int s, int e){
	if(s >=e){
		return;
	}
	
	int p = partition(a,s,e);
	
	quickSort(a, s, p-1); // sort left subarray
	quickSort(a, p+1, e); // sort right subarray
		
	
}

int main(void){
	
	int n;
	int arr[100];
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> arr[i];
		
	}
	
	//call function
	quickSort(arr,0,n-1);
	
	for(int i=0; i<n; i++){
		
		cout << arr[i] << " ";
	}
	
	return 0;
	
}




