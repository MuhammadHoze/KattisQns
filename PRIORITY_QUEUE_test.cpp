#include <bits/stdc++.h>


using namespace std;


int main(void){
	
	//priority_queue <int> arr_num; // for DEFAULT: DESCENDING ORDER
	priority_queue<int, vector<int>, greater<int> >arr_num;  // FOR ASCENDING ORDER 
	int num;
	int count = 0;
	
	cin >> num; // number of elements in array
	
	
	for(int i=0; i<num; i++){
		int value;
		
		cin >> value;
		arr_num.push(value);
		count = arr_num.size();
	}
	cout << endl;
	
			// To print out priority queue 
			while (!arr_num.empty()){ 
        		cout << arr_num.top() << endl; 
        		arr_num.pop(); //once element is at the top, it will "pop"(Delete) the top element. 
    		}
    		
    		cout << endl;
    		
    		cout << count; // display out the total elements inside vector 
	
	
	
	
	
	return 0;
}
