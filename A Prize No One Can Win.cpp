#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int n;
	long long min_cost;
	long long count = 1;
	vector <long long> price;
	
	cin >> n >> min_cost;
	
	for(int i=0; i<n; i++){
		long long value;
		cin >> value;
		
		price.push_back(value);
		
	}
	
	sort(price.begin(), price.end());
	

	for(int i=1; i<price.size(); i++){

		if(price[i] + price[i-1] <= min_cost)
			count = i + 1;	
	}
		
	
	cout << count;
	
	return 0;
}
