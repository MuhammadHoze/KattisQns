#include <bits/stdc++.h>
using namespace std;


int main(void){
	
	vector<int> value;
	value.resize(11, 0);
	string number;
	cin >> number;
	
		
	//stable_sort(number.begin(), number.end()); 
	
//	for(auto c : number) {
//        value[c-'0']++;
//    }


	for(int i=0; i<number.size(); i++){
		
		value.push_back(number[i] - 48); // from string to int value
	}
	
	//value.push_back(0);
	
	
	value[10] = value[0];

    int num = 1;
    int m = value[1];
    for(int i = 1; i <= 10; i++) {
        if(value[i] < m) {
            num = i;
        }
        m = min(m, value[i]);
    }

    if(num == 10) {
        cout << 1;
        num = 0;
    }

    for(int i = 0; i < m+1; i++) {
        cout << num;
    }

    cout << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
//	for(int i=0; i<value.size()-1; i++){
//		
//		if(value[i+1] - value[i] != 1){
//		
//			cout << value[i] + 1;
//			break;
//		}
//		
//	}
	
	
	
//	
//	for(auto v:value){
//		
//		cout << v <<endl;
//	}
	
//	cout << number;
		
	

	
	

	
	
	
	
	
	
	return 0;
}
