#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	int n;

	cin >> n;
	cin.get(); // important to input correct number of n values 
	
	list <string> s[n]; //declare list like this 
	
//	Another way to input data into list 
	
//	list <string> s;
//	for(int i=0; i<n; i++){
//		string individual;
//		
//		cin >> individual;
//		
//		s.push_back(individual);
//		
//		//getline(cin,individual);
//		
//		//cout << individual; //print out after n values taken in
//		
//	}
	
	
	for(int i=0; i<n; i++){
		string individual;
		
		cin >> individual;
		
		s[i].push_back(individual);
		
		//getline(cin,individual);
		
		//cout << individual; //print out after n values taken in
		
	}
	--n; // to change to n-1 and start from 0 index 
	int a=0;
	int b=0;
	while(n != 0){
	
		cin >> a >> b; //input the numbers 
		--a; //important work in 0 based index
		--b; //important 
		
		s[a].splice(s[a].end(),s[b]);	//transfer all the elements from b to end of a. 
		//s[a].splice(s[a].begin(),s[b]); transfer all the elements from b to front of a
		n--;
	}	
	
	//To display
	for (auto &v : s[a]){ // display string pointing to s[a] eg. s[2] for 1st test case   (like a pointer)
    	cout << v;
	}	
  	cout << endl;
	
	return 0;
}
