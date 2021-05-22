#include <bits/stdc++.h>

using namespace std;


int main()
{
	int iteration = 0;
	int x = 0;

	vector<int> values;
	
	cin >> iteration;
	
	for(int i = 0; i < iteration; i++) {
		int total = 0 ;
		
		cin >> x;
		
		for (int j = 0; j < x; j++) {
			int temp = 0;
			cin >> temp;
            values.push_back(temp);
			
		}
		
		sort(values.begin(), values.end());
		
		total = 2 * (values[x-1] - values[0]);
		cout << total << endl;
		values.clear();
		
	}
	
	return 0;
		
}
