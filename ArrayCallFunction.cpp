#include <bits/stdc++.h>
const int MAX = 10;


using namespace std;

int sum(int arr[], int size){
	int total = 0;
	
	for(int i=0; i<size; i++){
		
		total += arr[i];
		
	}
	
	return total;
	
}



void printArray(int arr[], int size){
	
	
// for printing
for(int i=0;i<MAX; i++){
	
	cout << arr[i] << " " ;
}
cout << endl;	
	
	
	
}



int main(void){
	
int arr[MAX];
int result;

for(int i=0; i<MAX; i++){
	
	cin >> arr[i];
	
}	

result = sum(arr, MAX);
printArray(arr,MAX);

cout << result << endl;
 

	
	
	return 0;
}



