#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> values;
    double widthspace = 0.0;
    double lengthspace = 0.0;
    bool widthfit = false;
    bool lengthfit = false;
    
    
    for (int i = 0; i < 4; i++) {
		int temp = 0;
    	cin >> temp;
        values.push_back(temp);
	}     
	
	widthspace = values[0] - values[2];
	if (widthspace / 2 >= 1.0) {
		
		widthfit = true;
	}
	
	lengthspace = values[1] - values[3];
	if (lengthspace / 2  >= 1.0) {
		
		lengthfit = true;
		
	}    


	if (widthfit && lengthfit) {
		
		cout << "1";
	}
	
	else {
		
		cout << "0";
	}
    


    return 0;
}
