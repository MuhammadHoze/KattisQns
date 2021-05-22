#include <bits/stdc++.h>

using namespace std;


int main()
{
	int iteration = 0;
	double total = 0 ;
	double result = 0.0;


	vector<int> values;
	
	cin >> iteration;
	
	for(int i = 0; i < iteration; i++) {

		int temp = 0;
		cin >> temp;
		
		if ( temp != -1) {
			values.push_back(temp);
		}
		else 
			continue;
		
	}
	
//	cout << "Output of begin and end: ";
//	for (auto i = values.begin(); i != values.end(); i++)
//    	cout << *i << " ";
	
	
	for (auto i = values.begin(); i != values.end(); i++)
    	total += *i;
		
	
	result = total / values.size();
	cout.precision(17);
	cout << result << endl;

	return 0;
		
}
