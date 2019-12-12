#include <bits/stdc++.h>

using namespace std;

/*

USE STRINGSTREAM FOR VARIABLE STRING. 


*/

/*

N is no. of char.
so max is O(100);

*/

int main(void){
			
	string input;
	getline(cin,input); // cin the input phrase
	
	vector <string> str; //empty string to store the intials 
	
	
	stringstream check(input);  // to break up the words in (input) . stringstream name is "check"
	
	string output; // to store individual words  ("output" is the string for each and every individual word)
	
	while(getline(check,output,'-')){
		
		
		str.push_back(output); //store the individual words in one vector str
	}
		


	//cout << str.front();  //to print the first word 
	 
	
	//printing the vector, str
	for(int i=0; i< str.size(); i++){
		
			string first_char;
			first_char = str[i].substr(0,1);
			cout << first_char ;
		
			//cout <<str[i] <<endl ; // will display the entire word 
			
		
	}
	
	return 0;
}




//	string word;        
//	string sentence;           
//	for (int i = 0; i < 10; ++i)
//	{
//	    cin >> word;
//	    sentence += word + " ";
//	}
//	
//	cout << sentence;
