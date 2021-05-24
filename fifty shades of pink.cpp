#include <bits/stdc++.h>

using namespace std;


int main()
{
	vector<string> values;
	int count = 0;
	int iteration;
	
	cin >> iteration;
	
	for(int i = 0; i < iteration; i++) {
		
		string temp = "";
		cin >> temp;
		transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
	    values.push_back(temp);
			
	}
	cout << endl;
	
	for(string str : values) {
			
		if (str.find("rose") != -1 || str.find("pink") != -1 ) {
			count++;
		} 
	}
  	
	if (count != 0) {
		cout << count << endl;
	}
	
	else {
			
		cout << "I must watch Star Wars with my daughter";
	}

		
	
	return 0;
		
}
