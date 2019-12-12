#include <bits/stdc++.h>

using namespace std;

int main(void){
	
	int set;
	
// freopen("in.txt","r",stdin); USED TO OPEN A TEXT FILE
    ios::sync_with_stdio(false); cin.tie(NULL);  // to reduce complexity time

	cin >> set;

	for(int i=1; i<=set; i++){
		int dummy; // the first value
		vector<int> height; //declare vector called height which is of data type int
		
		cin >> dummy; //input by user for each data set
		
		//To input data into vector
		for (int j = 1; j <= 20; j++){
			int temp;
			
			cin >> temp;
			height.push_back(temp); //push back variable temp into empty vector to fill up 20 int. 
		}
		
		
		cout << dummy << " "; //data set number
		
		
		
//		// To output elements from a vector
//		for(auto v: height){
//			
//			cout << v << " ";
//		}
//		cout <<endl << endl;

		
				
		//insertion sorting	
		int key, j;
		int count = 0;
	    for (int m = 1; m < height.size(); m++) { // for every element 
	        key = height[m];  
	        j = m - 1;  
	  
	        /* Move elements of arr[0..i-1], that are  
	        greater than key, to one position ahead  
	        of their current position */
	        while (j >= 0 && height[j] > key) 
	        {  
	        	count++;
	        	height[j + 1] = height[j];  
	            j = j - 1;  
	            
	        }  
	        height[j + 1] = key;  
	        
	    } 
		
		cout << count << endl;
		
	}

	return 0;
}
