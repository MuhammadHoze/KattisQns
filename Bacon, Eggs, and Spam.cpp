#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	ios ::sync_with_stdio(false);
	cin.tie(NULL);
	
	int customer; // no. of customer

	while(cin >> customer){
			
		cin.ignore();
		if (customer == 0)
			return 0;
	
		map <string, set<string> > order;  // key : food   value : name   (categorize the names under the food) 
	
		for(int i=0; i<customer; i++){
			
			string s;
			string name;
			string food;
			
			
			getline(cin, s); // THE ENTIRE STRING (NAME AND FOOD)
			
			stringstream check(s);   // to break up the words in (s) . stringstream name is "check"
			
			check >> name;	//break up the name

            while(check >> food){ // break up all the possible food 
                order[food].insert(name); //insert the name into the respective keys(food) 
            }
		}
	
		//To display out
		for (auto &v : order ) {
		  cout << v.first; // food 
      	
    		for (auto &name : v.second) { // in the set 
	  
       			cout << " " << name;
    		}
     	 	cout << endl;
   		}
    	cout << endl;	
    	
	}
	return 0;
	
}







//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main(void){
//	
//	ios ::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	int customer; // no. of customer
//
//	while(cin >> customer){
//			
//		cin.ignore();
//		if (customer == 0)
//			return 0;
//	
//		map <string, string > order;  // key : food   value : name   (categorize the names under the food) 
//	
//		for(int i=0; i<customer; i++){
//			
//			string s;
//			string name;
//			string food;
//			
//			
//			getline(cin, s); // THE ENTIRE STRING (NAME AND FOOD)
//			
//			stringstream check(s);   // to break up the words in (s) . stringstream name is "check"
//			
//			check >> name;	//break up the name
//
//            while(check >> food){ // break up all the possible food 
//                //order[food].insert(name); //insert the name into the respective keys(food) 
//                
//                order[food] = name; // only insert ONE NAME 
//            }
//		}
//	
//		//To display out
//		for (auto &v : order ) {
//		  cout << v.first <<  " " << v.second; // food 
//      	
////    		for (auto &name : v.second) { // in the set 
////	  
////       			//cout << " " << name;
////       			cout << name;
////    		}
//     	 	cout << endl;
//   		}
//    	cout << endl;	
//    	
//	}
//	return 0;
//	
//}














