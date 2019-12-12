#include <bits/stdc++.h>


using namespace std;

int sum(vector <int> &num){
	int total;
	
	for(int i=0; i<num.size(); i++){
		
		total = accumulate(num.begin(), num.end(),0);
	}
	
	return total;
}


void printVector(vector <int> &num){
	
	for(auto v:num){
 	
 		cout << v << " "; 
	}
	
	cout << endl;
	
	
}
 

int main(void){
	
 vector <int> num;
 int data;
 int result;
 
 cin >> data;
 
 for(int i=0; i<data; i++){
 	int value;
 	
 	cin >> value;
 	
 	num.push_back(value);
 	
 	
 }	
 
 result = sum(num); //call function input vector 
 
 
 cout << result << endl;
 
 printVector(num); //call function 
 
 

	
	
	return 0;
}














// RETURN  A VECTOR

//vector<int> compareTriplets(vector<int> a, vector<int> b) {
//    int countA =0;
//    int countB =0;
//    vector <int> v; // initialize a new vector 
//
//    for(int i=0; i<a.size(); i++){
//
//        if (a[i] > b[i]){
//            countA++;
//        }
//        if (a[i] < b[i]){
//            countB++;
//        }
//        
//    }
//    //push back the values into the new vector
//    v.push_back(countA);
//    v.push_back(countB);
//
//    //return vector v
//    return v;    
//
//}
