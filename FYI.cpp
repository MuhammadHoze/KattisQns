#include <bits/stdc++.h>

using namespace std;


int main()
{

	string input;
	cin >> input;

	string subinput = input.substr(0, 3); 
	cout << subinput << endl;
	
	int compare = subinput.compare("555");
	cout << compare << endl;
	
	if (compare == 0 )  // if match
		 cout << "1";
	else
		cout << "0"; // not match = -1


    
	return 0;
		
}

