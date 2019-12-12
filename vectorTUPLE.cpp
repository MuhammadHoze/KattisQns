#include <bits/stdc++.h>
using namespace std;

/* 1. iniitalize a tuple
   2. cout the tuple 
   3. sort the tuple and then cout
*/


int main(void){
	
	priority_queue<tuple<int,string,int>> number;
	//vector<tuple<int,string,int>> number;
	int n;
	
	cin >> n; // to input the number of tuples
	
	for(int i=0; i<n; i++){
		int value1,value3;
		string value2;

		cin >> value1 >> value2 >> value3;
	//	cin.ignore();
		
		number.push(make_tuple(value3,value2,value1));	
		//number.push_back(make_tuple(value1,value2,value3));		
		
	}
	
	cout << endl;
	
//	//To diplsay out the tuple
//	for(int i=0; i<n; i++){
//		
//		cout << get<0>(number[i]) << " " // first element
//             << get<1>(number[i]) << " " // second element
//             << get<2>(number[i]) << "\n "; //"\n";  // third element
//             //<< get<3>(number[i]) << "\n";
//		
//		
//	}

	
//	using lamda expression!! 
//	ASCENDING '<'
//	DESCENDING '>' 
//	sort(number.begin(), number.end(), [] (const tuple<int,string,int>& x, const tuple<int,string,int>&y){
//		
////		//compare 4th element
////		if (get<3>(x) != get<3>(y)){ //index 3
////			return (get<3>(x) < get<3>(y));	
////		}
//		
//		//compare 3rd element 
//		if(get<2>(x) != get<2>(y)){ //index 2
//			return (get<2>(x) > get<2>(y));
//		}
//		//compare 2nd element if 3rd is equal
//		else if (get<1>(x) != get<1>(y)){ //index 1
//			return (get<1>(x) > get<1>(y));
//		}
//		//compare 1st element if 2nd and 3rd
//		else
//			return (get<0>(x) > get<0>(y)); //index 0
//		
//	});
	
	
	cout << endl; 
	
	tuple<int,string,int> top = number.top(); 
//   // cout << get<0>(top) << " " << get<1>(top)<< " " << get<2>(top); 
    cout << get<1>(top); //to get just the name


	
//	//To diplsay out the tuple
//	for(int i=0; i<n; i++){
//		
//		cout << get<0>(number[i]) << " " // first element
//             << get<1>(number[i]) << " " // second element
//             << get<2>(number[i]) << endl ;//"\n";  // third element
//             //<< get<3>(number[i]) << "\n";
//		
//	}
	
//	for(int i=0; i<n; i++){
//		cout << get<1>(number[i])<< endl;
//	}
//	
	
	
	
	
	return 0;
}
