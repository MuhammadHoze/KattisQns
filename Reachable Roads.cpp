#include <bits/stdc++.h>
using namespace std;


typedef vector<int> v;

enum { NOTVISITED, VISITED };  //these are the flags

//global variable
vector<v> AdjencyList; // store the graph here 
v dfs_num;

void dfs(int i){
	
	dfs_num[i] = VISITED; // mark vertex as visited 
	for(auto a : AdjencyList[i]){
		if (dfs_num[a] == NOTVISITED){ 
			dfs(a); // go to notvisited vertices 
		}
	}	
}

int main(void){
	
	ios ::sync_with_stdio(false);
	cin.tie(NULL);
	
	int city; // n
	int endpts;  // m
	int edges;
	int expectedmin;
	
	cin >> city;

	
	// so minimum edges for it to be connected must be n-1; 
	
//	vector <pair<int,int> > node;
	
//	vector <int> A;
//	vector <int> B;
//	

	for(int j=0; j<city; j++){
		
		cin >> endpts; // no. of verties
		cin >> edges;
		AdjencyList.assign(endpts,v());
	
		for(int i=0; i<edges; i++){
			int nodeA, nodeB;
			
			cin >> nodeA >> nodeB;
			
			AdjencyList[nodeA].push_back(nodeB); // nodeA has neighour nodeB
			AdjencyList[nodeB].push_back(nodeA); // nodeB has neighbour nodeA
		//	node.push_back(make_pair(nodeA,nodeB));		
		}
		
		dfs_num.assign(endpts, NOTVISITED); //initially all unvisited
		int min = 0;
		for(int x=0; x<endpts; x++){ // go thru all the vertices
			
			if(dfs_num[x] == NOTVISITED){ //
				min++;
				dfs(x); // call function to clear neighbours of that vertices (make the neighbours all visited)
			}
		}
		cout << min-1 << endl;
//		expectedmin = endpts - 1; 
//		cout << expectedmin - edges << "\n";
	}
	

	
	
	
//	cout << endl;
//	cout << endl;
//	
//	//To display vector of pair 
//	for(int i = 0; i < node.size(); i ++){
//		
//        cout << node[i].first << " " << node[i].second << endl;
//    }


	
	return 0;
}
