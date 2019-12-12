#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	string s;
	
	set <string> singleword;
	
	set <string> compoundword;
	
	while(cin >> s){
		
		singleword.insert(s);
	}
		
	for(auto it = singleword.begin(); it !=singleword.end(); it++){
		for(auto it2 = singleword.begin(); it2 != singleword.end(); it2++){
			
			
			if (it != it2) {
				
				compoundword.insert(*it + *it2);
			}
			
		}
		
	}
	
	
	for (auto v = compoundword.begin(); v != compoundword.end(); v++){
		
		cout << *v << endl;
		
	}
//	for(auto v : compoundword){
//		
//		cout << v << endl;
//	}
	
	
//	for(int i=0; i<singleword.size(); i++){ // check if possible to concatenate the words tgt 
//		for(int j=0; j<singleword.size(); j++){ // check with the other words
//			
//			if (singleword[i] )
//			
//			
//		}
//		
//		
//		
//	}
	
//	for(auto v:word){
//		
//		cout << v << endl;
//	}
	
	
	
	
	
	
	
	
	return 0;
}
