#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	string input;

	cin >> n;
	cin.get(); //IMPORTANT
	
	for(int i=0; i<n; i++){ 
		getline(cin,input);
		bool flag = true; // can complete adventure
		stack <char> bag;
		
		for(int i=0; i<input.size(); i++){
			
			if(input[i] == '.'){
				continue;
			}
			else if((input[i] == '$') || (input[i] == '|') || (input[i] =='*')){
				
				bag.push(input[i]); //push into stack called bag 
			}
			else if((input[i] == 'b' ) || (input[i] == 'j') ||(input[i] == 't')){
				char demand;
				if (input[i] == 'b'){
					demand = '$';
				}
				else if(input[i] == 'j'){
					demand = '*';
				}
				else{
					
					demand = '|';
				}
						
				while(!bag.empty() && (bag.top() != demand)){
		
					bag.pop(); //keep popping out the non matching ones 
				}	
					
				if (bag.empty()){ //if bag becomes empty after while loop exhaustion (still got villian but no more items)
						
					flag = false; // adventure fail!!  (premature death)
					break; //adventure over 					
				}
				else{
					
					bag.pop(); // the correct demand is given to the respective person 
						
				}			
			}	
		}
		
		if (bag.empty() && flag == true){
		
			cout << "YES"<< endl;
		}
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
