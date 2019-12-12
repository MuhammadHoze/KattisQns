#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	ios ::sync_with_stdio(false);
	cin.tie(NULL);
	
	int command;
	multiset <pair<int,int> > quest; // allow duplicates
	cin >> command;
	
	for(int i=0; i<command; i++){
		
		string instruction;
		int E, G;
		
		cin >> instruction;
		cin.ignore();
		
		if(instruction == "add"){
			
			cin >> E >> G;
			
			quest.insert(make_pair(-E,-G)); // Energyconsume, Gold	
		}
		
		if(instruction == "query"){
			
			int X;
			cin >> X;
			long long sum = 0;
			
			
			while(X){
				
				auto v = quest.upper_bound({-X,INT_MIN});
				if ( v == quest.end())
					break;

					X += v->first; // to find the remaining Energy left 
					sum -= v->second;  
					v = quest.erase(v);	 // after adding the gold, delete the set entry 				
			}
			
			//causes TLE 
			
//			//for(auto v = quest.begin(); v!=quest.end(); ){
//			for(auto v = quest.upper_bound({-X,INT_MIN}); v!= quest.end(); ){
//				
//				if(-X <= v->first){ //v->first and v->second are both negative 
//					if(X != 0){
//					
//						X += v->first; // to find the remaining Energy left 
//						sum -= v->second;  
//						v = quest.erase(v);	 // after adding the gold, delete the set entry 
//					}
//					else
//						break;
//				}
//				else{
//					++v;
//				}
//			}
			cout << sum << "\n";	
		}
	}
		
//	 To Display out a set! 
//	for(auto it= quest.begin(); it!=quest.end(); ++it){
//		
//        cout<< it->first <<" "<< it->second <<endl;
//    }
			
	return 0;
}
