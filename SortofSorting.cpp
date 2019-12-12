#include <bits/stdc++.h>

using namespace std;

//compare the strings (student)
bool compare (string first, string second){
	
	if((first[0] == second[0]) && (first[1] == second[1])){
		
		return 0; // will not swap if the first two char of the string are the same (order wont change)
	}
	else 
		return first < second; // will swap
}

int main(void){
	
	ios::sync_with_stdio(false); cin.tie(0);
	
	int setnum;
	vector<string> names;
	string student;
	
	cin >> setnum;
	cin.ignore();
		
	while(setnum != 0){
		names.clear();	// clear the array after one cycle
		
		
		//To input data
		for(int i=0; i<setnum; i++){
			
			
			cin >> student;
			names.push_back(student);
				
		}
				
		stable_sort(names.begin(), names.end(), compare);  // compare is a function that is called 
		
		cout << endl;
		
		//To display data
		for(auto v:names){
			
			cout << v<<endl;
		}
		cout << endl;
		
			
		cin >> setnum;	
		
	}
	
	return 0;
}


	//	//To sort data in increasing order 
	//	sort(names.begin(), names.end()); //begin means the 1st element till end, last element

	// adding + 3 means it will not sort the first 3 elements
	//stable_sort(names.begin() + 3, names.end());
	
	// adding + 1 means it will only sort the first element 
	//partial_sort(names.begin(), names.begin() + 1, names.end());
