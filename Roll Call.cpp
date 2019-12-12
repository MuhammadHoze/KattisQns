#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	ios ::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	//int n = 6;
	map <string, vector<string> > name;  //key : last     value: first
	map<string, vector<string> >::iterator it;
	
	string first,last;
	
	while(cin >> first >> last){
	//while(n != 0){
		
	//	cin >> first >> last;
		cin.ignore();
		
		name[last].push_back(first);  // vector of first name 

		
		for(auto it=name.begin();it!=name.end();it++){
			sort(it->second.begin(),it->second.end()); // sort the first name 
		}
		
	//	n--;
	}
	

//	// To display the map sequence
//	for(auto mapit = begin(name); mapit != end(name); ++mapit){
//		
//		cout << mapit->first << " : "; // key (last name)
//
//    	for(auto c : mapit->second){ // value (first name)
//    		
//        	cout << c << " ";
//    	}
//    
//   		cout << std::endl;	
//	}
		
	for(auto mapit = begin(name); mapit != end(name); ++mapit){
		
    	for(auto c : mapit->second){ // value (first name)
    		
    		if (mapit->second.size() > 1){
    			
    			cout << c << endl;
			}
    			
        	else{
        		
				cout << c << " " << mapit->first << endl; // value (first name)
        		//cout << mapit->first << endl; // key (last name)
        	}
    	}	
	}
			
	
	return 0;
}
