//Time complexity: O(nlogn)

//ARRAY METHOD 

#include <bits/stdc++.h>
using namespace std;

//function to merge the subarrays
void merge(int number[],int start,int end){
	
    int mid = (start+end)/2;
    
    int i = start; // start of the vector
    int j = mid+1; // the start of the 2nd vector 
    int k = start; // start of the TEMPORARY array
    
    //vector <int> temp;
    int temp[100]; //temporary array
    
    while(i<=mid && j<=end){
        if(number[i] < number[j]){
        	
        	//temp.push_back(number[i]);
            temp[k] = number[i];
            k++;
            i++;
        }
        else{
        	//temp.push_back(number[j]);
            temp[k] = number[j];
            k++;
            j++;
        }
    }
    
    //This while loop is if the 1st array has remaining values
    while(i<=mid){
    	//temp.push_back(number[i]);
        temp[k] = number[i];
    	k++;
        i++;
    }
    
    //This while loop is if the 2nd array has remaining values 
    while(j<=end){
    	//temp.push_back(number[j]);
        temp[k]  = number[j];
        k++;
        j++;
    }
    
    //We need to copy all element to original arrays
    for(int i=start;i<=end;i++){
    	
    	number[i] = temp[i];
    	
    	
    	
	}	
//    	
//    while(!temp.empty()){
//	
//    	
//    	int value = temp.back();
//		temp.pop_back();
//		number.push_back(value);
//    	
//    	
//        
//    }
    
    
}

void mergeSort(int number[],int start,int end){
    //if 1 or 0 elements in the vector, don't have to sort. just return 
    if(start>=end){
        return; //return the vector 
    }
    
    //Follow 3 steps
    
    //1. Divide
    int mid = (start+end)/2; //mid point
    
    // 2. Recursively divide the vector
    mergeSort(number,start,mid); // divide the vector into a single element from start to mid
    mergeSort(number,mid+1,end); // divide the vector into a single element from mid+1 to end
    
    // 3. Sort & merge the two parts
    merge(number,start,end);
}
    
   

int main(){

	int number[100];
	//vector <int> number;
	
	int n;
	cin>>n; //no of elements 

	for(int i=0;i<n;i++){
//		int value;
//		
//		cin >> value;
//		number.push_back(value);

		cin >> number[i];
	}
	
	//call merge function 
	//vector,start,end
	mergeSort(number,0,n-1); 
	
	
	for(int i=0; i<n; i++){
		
		cout << number[i] << " ";
	}
	
//	for(auto &v: number){
// 		
//		cout << v << " ";
//	}
//	
	
	
return 0;	
}
