#include <bits/stdc++.h>

using namespace std;


int main()
{
	int iteration = 0;
	int total = 0 ;

	
	cin >> iteration;
	
	for(int i = 0; i < iteration; i++) {

		string input;
		vector <string> tokens;

		cin >> input;

		
		if (input.find("+") != -1) {
			
			stringstream check1(input);
			string intermediate;


      
		    // Tokenizing w.r.t. space ' '
		    while(getline(check1, intermediate, '+'))
		    {
		        tokens.push_back(intermediate);
		    }
		      
			// Printing the token vector
		    for(int i = 0; i < tokens.size(); i++)
		        cout << tokens[i] << endl;
		        
	        int row = stoi(tokens[0]);
			int column = stoi(tokens[1]);
			
			total = row + column;
			cout << total << endl;
			
			tokens.clear();
			
			

			
		}
		else 
			cout << "skipped" << endl;
		
	}
	
	return 0;
		
}

