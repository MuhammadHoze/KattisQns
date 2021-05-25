#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<double> values;
    int count = 0;		
	int iteration;
	int calories = 400;
    
    
    cin >> iteration;
    
    for(int i = 0; i < iteration; i++) {
        	
        
        double total;
        
        cin >> total;
        
        cout << ceil(total / calories) << endl;
       
    }
    
    return 0;
        
}
