#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	long long n;
	vector <long long> friends;
	cin >> n; // no. of candies 
	
	for(int i=1; i<sqrt(n)+2; i++){ // O(tetha(logn))
		
		if(n % i == 0){
			
			friends.push_back(i);
			friends.push_back(n/i); //2nd half of the values
		}
	}
	
	sort(friends.begin(), friends.end()); //ascending order 
	
	friends.erase(unique(friends.begin(), friends.end()), friends.end());  //to delete duplicates
	
	
	for(auto v:friends){
		
		cout << v-1 << " " ;
	}
	
	return 0;
}
