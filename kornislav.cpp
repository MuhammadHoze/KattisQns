#include <bits/stdc++.h>

using namespace std;


int main()
{
	vector<int> values;
	int total = 0;
	
	for(int i = 0; i < 4; i++) {
		
		int temp = 0;
		cin >> temp;
	    values.push_back(temp);
			
	}
		
	sort(values.begin(), values.end());
	
	total = values[0] * values[2];
	cout << total << endl;

	
	return 0;
		
}
