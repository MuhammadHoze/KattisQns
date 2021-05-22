#include <bits/stdc++.h>

using namespace std;


int main()
{
    int iteration = 0;
    vector<int> values;
    int duration = 0;
    
    cin >> iteration;
    
    if (iteration % 2 == 1) {
    
        cout << "still running";
        return 0;
    }
    
    else {
    
        for (int i = 0; i < iteration; i++) {
			int temp = 0;
        	cin >> temp;
            values.push_back(temp);
  		}     
    }
    
    for (int i=1; i < values.size(); i+=2) {
    	
    	duration += values[i] - values[i-1];
	}
    
    cout << duration;
    
    
    
//    cout << "Output of begin and end: ";
//	for (auto i = values.begin(); i != values.end(); i++)
//    	cout << *i << " ";

    return 0;
}
