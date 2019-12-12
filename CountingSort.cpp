// Time complexity : O(range + n )

#include <bits/stdc++.h>

using namespace std;

// the '&' is a pointer, so the vector will be updated in main function as well
void countSort(vector <int> &input) 
{ 
    int max = *max_element(input.begin(), input.end()); //find the max 
    int min = *min_element(input.begin(), input.end()); //find the min
    int range = max - min + 1;  // range is set here
      
    vector<int> count(range);
	vector<int> output(input.size()); 
    for(int i = 0; i < input.size(); i++) 
        count[input[i]-min]++; 
          
    for(int i = 1; i < count.size(); i++) 
           count[i] += count[i-1]; //find the cumulative
    
    for(int i = input.size()-1; i >= 0; i--) 
    {  
         output[count[input[i]-min] -1] = input[i];  
              count[input[i]-min]--;   // after every correct placement, decrease count by -1
    } 
      
    // output is a temp vector which copies back to original vector
    for(int i=0; i < input.size(); i++) 
            input[i] = output[i]; 
} 
  
//void printArray(vector <int> &arr)  
//{  
//    for (int i=0; i < arr.size(); i++)  
//        cout << arr[i] << " ";  
//    cout << "\n";  
//} 
  
int main(void) 
{ 
	
	int n;
	vector<int> input;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		int value;
		
		cin >>value;
		input.push_back(value);
		
	}
	
    countSort(input); 
    
    
     for(auto &v: input){
 		
		cout << v << " ";
	}
    //printArray (arr); 
    return 0; 
} 


