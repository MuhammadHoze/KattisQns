#include <bits/stdc++.h>
using namespace std;


//USE OF MERGE SORT

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


int main(void){
	
	int task;
	int time;
	
	vector <int> work;
	vector <int> duration;
	
	cin >> task >> time;
	
	//for task length
	for(int i=0; i<task; i++){
		int value;
		
		cin >> value;
		work.push_back(value);
		
	}	
	
	//for time length
	for(int i=0; i<time; i++){
		int value;
		
		cin >> value;
		duration.push_back(value);
		
	}
	
	cout << endl;
	
	sort(work);	//use merge sort
	sort(duration); //use merge sort

	
// CAN USE stable_sort ALSO (either both ascending or both descending)

//	stable_sort(work.begin(), work.end()); //in decreasing order
//	stable_sort(duration.begin(), duration.end()); // in ascending order
	
	int count = 0;
	int job = 0;
	int interval = 0;
	
	while(job < work.size() && interval < duration.size()){ //SAVE TIME COMPLEXITY.	
		
		if(work[job] <= duration[interval]){
			count++;
			job++;
		}
		interval++; // else continue with the interval until while loop exhausted or all job satisfied with intervals
	}	
	
	
	cout << count;
	
	return 0;
}
