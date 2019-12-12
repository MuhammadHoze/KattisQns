#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(void){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
		
	
	int node,edge,query,sourceindex;
	int u,v,w; // an edge from u to v with weight w
	
	cin >> node >> edge >> query >> sourceindex ;
	
	while((node || edge || query || sourceindex) != 0){
		
		//Creating Adjacency list
		vector <tuple<int,int,int> > adjacencyList(edge);
	
		for(int i=0; i<edge; i++){
			
		
			cin >> u >> v >> w;
			
			adjacencyList.push_back(make_tuple(u,v,w));
		//	adjacencyList[i] = make_tuple(u,v, w);  // assign the neighbour and weight 
			
		}

		vector<int> distance(node,INF);
		distance[sourceindex] = 0; // source to source distance always 0
		
		//implementing bellman ford 
		for (int i = 0; i < node-1; ++i) {              // max of n-1 rounds 
		    bool modified = false;  

			for(const auto &[u,v,w] : adjacencyList){
		    
		    	if(distance[u] == INF){
		    		continue;
				}
				if(distance[u] + w < distance[v]){
						modified = true;
						distance[v] = distance[u] + w;
					
				}
			
			}
		    if (!modified) //if no modification made, just break
				break; 
		
 		}
		
		
		//To print out Adjacency List
//		for (int i = 0; i < adjacencyList.size()-1; ++i) {
//			printf("adjacencyList[%d] ", i);
//         
//	        list< pair<int, int> >::iterator itr = adjacencyList[i].begin();
//	         
//	        while (itr != adjacencyList[i].end()) {
//	        	
//	        	//cout << (*itr).first << " " << (*itr).second;
//	            printf(" -> %d(%d)", (*itr).first, (*itr).second);
//	            ++itr;
//	        }
//	        printf("\n");
//   	 	}	
		
		
		
		for(int j=0; j<query; j++){
			
			int q;
			
			cin >> q;
			
			if (distance[q] == INF){ // vector that is queried from the source
				cout << "Impossible" << endl ;
			}
			else
				cout << distance[q] << endl;
			
		}
		cin >> node >> edge >> query >> sourceindex ;
	}
	return 0;
}
