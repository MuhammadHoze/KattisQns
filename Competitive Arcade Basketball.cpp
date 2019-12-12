#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	ios ::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; // no. of participants
	int p; //points needed
	int entries; // no. of entries
	
	/* map key(name) to pts 
	   can create hash table wihout initial size too
	   preferred to declare table size about 2 times larger (2*n) to minimise the LOAD FACTOR */
	   
	unordered_map<string, int> sum(3*n); // HASH TABLE CALLED SUM (of total pts)
	
	cin >> n >> p >> entries;
	
	//Just to take in the players name
	for(int i=0; i<n; i++){
		string players;
		
		cin >> players;	
	}
	
	//Take into account the players and score
	
	int flag = 0; //To notify the winner
	int pt = 0;
	for(int i=0; i<entries; i++){
		
		string name;

		cin >> name >> pt;
		sum[name] += pt; // adding the pts to each "name" 
		
		if(sum[name] >= p){ //if the pts under that "name" is >= pts required
			
			cout << name << " " << "wins!" << endl; //straight away print out
			flag = 1; // this means there is already a winner 
			sum[name] = -999999999;  // to stop the player to win again. only win once! so even if he/she keeps shooting, it will not reach the required pts 
		}
	}
	
	if (flag == 0){
		
		
		cout << "No winner!";
	}
	
	return 0;
}
