#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	ios ::sync_with_stdio(false);
	cin.tie(NULL);
	
	int TC; // no. of test case
	int canvas; //no. of canvasses
	priority_queue<long long, vector<long long>, greater<long long> > dimension; //sort in ascending order
	
	cin >> TC;
	
	for(int i=0; i<TC; i++){
		
		cin >> canvas;
		for(int i=0; i<canvas; i++){
			long long value;
			
			cin >> value;
			dimension.push(value);	
		}
		
	//	cout << dimension.top();
				
		long long sum = 0;	
		while(dimension.size() > 1){
			
			long long temp = 0;
			
			temp+= dimension.top(); // 0 + 3 = 3
			dimension.pop(); // pop 3
			temp += dimension.top(); // 3 + 5 = 8
			dimension.pop();
			
			sum += temp; // once first 2 digits added up, add into the overall sum 
			
			dimension.push(temp); // push the temp (3 + 5 = 8) back into the PQ and it will sort  
			
			
		}
		dimension.pop(); // so that can start on the next TC with a empty PQ 

		cout << sum << endl;	
	}

	return 0;
}
