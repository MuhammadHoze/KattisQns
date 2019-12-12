#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	ios ::sync_with_stdio(false);
	cin.tie(NULL);
	
	int height;
	string direction; 
	long size; // total numbers 
	
	
	cin >> height >> direction; // 2 different elements (int >> string) therefore, dont have to stringstream  

	size = pow(2,(height+1)) - 1;
	
	int index = 1;
	
	//traverse through the string! 
	for(int i=0; i<direction.size(); i++){
		
		if(direction[i] == 'L'){ 
			
			index *= 2;
			
		}
		else if (direction[i] == 'R'){
		
			index = index * 2  + 1; 
		}
		else{ // if neither 'L' or 'R'
		
			cout << size;
			return 0; 
		}
	}
	
	cout << (size - index) + 1;
	
	return 0;
}
