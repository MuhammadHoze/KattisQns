#include <bits/stdc++.h>
using namespace std;

const int NUM = 31;

int main()
{
	string encrypted;
	string key;
	

	
	cin >> encrypted;
	cin >> key;
	int count = 1;
	
	// Traverse the encrypted string
    for (int i = 0; i < encrypted.length(); i++) {
    	
    	int encryptedindex;
    	int keyindex;
    	int total;
    	int result;
    	
    	if (count % 2 == 0) { // even MOVE FORWARD
		    encryptedindex = ((encrypted[i] & NUM ) - 1 );
		    //cout << "Encrypted index: " << encryptedindex << endl;
			// Traverse the key string
	    //	for (int j = 1; j < key.length(); j+=2) {	
	    		
	    		keyindex = ((key[i] & NUM ) - 1 );
	    		//cout << "keyindex index: " << keyindex << endl;
	    	
	    //	}
	    	int total = encryptedindex + keyindex;
	    	int result = total % 26;
	    	
	    	char symbol = (char)('A' + result);
			cout << symbol;
	    	//cout << "result index: " << result % 26 << endl;
	    	
    		
   		}
    	
    	else {  // odd MOVE BACKWARD
    	
    		encryptedindex = ((encrypted[i] & NUM ) - 1 );
    		//cout << "Encrypted index: " << encryptedindex << endl;
    		// Traverse the key string
	    	//for (int j = 0; j < key.length(); j+=2) {	
	    		
	    		keyindex = ((key[i] & NUM ) - 1 );
	    	//	cout << "keyindex index: " << keyindex << endl;
	    		
	    //	}
			int total = encryptedindex - keyindex;	
			if (total < 0) {
				//cout << total << endl;
				
				int result = 26 - abs(total);
				//cout << result << endl;
				char symbol = (char)('A' + result);
				cout << symbol;
			}
			else {
				char symbol = (char)('A' + total);
				cout << symbol;
			}

		} 
		
		count++;	
    }
    
    

	return 0;
		
}
