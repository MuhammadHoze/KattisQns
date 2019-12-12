#include <bits/stdc++.h>
using namespace std;


//VECTOR METHOD 

void mergeSort(vector<int> &left, vector<int> &right, vector<int> &number){
    int nL = left.size();
    int nR = right.size();
    
    int i = 0, j = 0, k = 0;

    while (j < nL && k < nR){
    	
    	// if left number smaller than right, input left into number vector first
        if (left[j] < right[k]) {
        	
            number[i] = left[j];
            j++;
        }
        else {
 			// input right number into number vector first
            number[i] = right[k];
            k++;
        }
        i++;
    }
    
    //This while loop is if the left side has remaining values
    while (j < nL) {

        number[i] = left[j];
        j++; 
		i++;
    }
    
    //This while loop is if the right side has remaining values
    while (k < nR) {

        number[i] = right[k];
        k++; 
		i++;
    }
    
}


void sort(vector<int> &number) {
    if (number.size() <= 1) 
		return;

	// 1. Obtain the midpt 
    int mid = number.size() / 2;
    vector<int> left;
    vector<int> right;

    for (int j = 0; j < mid;j++)
        left.push_back(number[j]);
    for (int j = 0; j < (number.size()) - mid; j++)
        right.push_back(number[mid + j]);
	
	// 2. Recursively divide the vector into single elements
    sort(left);
    sort(right);
    
	// 3. sort and merge the sub vectors
    mergeSort(left, right, number);
}



int main() {
    
	int n;
	vector<int> nums;
	
	cin>>n; //no of elements 

	for(int i=0;i<n;i++){
		int value;
		
		cin >> value;
		nums.push_back(value);
	}
	
	//call function
    sort(nums);
    
    
    for(auto &v: nums){
 		
		cout << v << " ";
	}
	 
    return 0;
}



