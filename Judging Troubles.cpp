#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;


	vector <string> dom;
	vector <string> kattis;
	
	cin >> n;
	cin.get();
	
	for(int i=0; i<n; i++){
		string value;
		
		cin >> value;
		
		dom.push_back(value);
	}
	
	for(int i=0; i<n; i++){
		string value;
		
		cin >> value;
		
		kattis.push_back(value);
	}
	
	stable_sort(dom.begin(), dom.end());
	
	stable_sort(kattis.begin(), kattis.end());
	
	
	int count = 0;
	
	while(dom.size() > 0 && kattis.size() > 0){ //size will change once the strings matches and then get removed 
		
		if(dom.back() == kattis.back()){ //comparing LAST element  (.end is the not inclusive of last element )
			
			count++;
			kattis.pop_back(); // delete the last element
			dom.pop_back(); //delete the last element 
		}
		else if (dom.back() < kattis.back()){ // if dom element is sort before kattis. Eg time (T) before wrong (W) therefore index of time is lower than wrong
			
			kattis.pop_back();
		} 
		else
			dom.pop_back(); // the opposite of if - else
		
		
	}
	
	cout << count <<endl;
		
	
//	for(auto v: dom){
//		
//		cout << v << endl;
//	}
	
	
	return 0;
}
