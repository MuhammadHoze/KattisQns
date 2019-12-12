#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int cost = 0;
    int length;
    cin >> n;

    vector<int> list;

    for(int i = 0; i < n; i++) {
        int price;
        cin >> price;
        list.push_back(price);
    }

    sort(list.rbegin(), list.rend()); // reverse the sorting from increasing to descending  
    
    length = list.size();
    
    while(length != 0){
    	
    	if(length % 3 != 0){
    		
    		cost += list[length-1] ; // list index starts from 0
		}
    	
    	
    	length--;
	}     
    
    cout << endl;
    
    cout << cost << endl;
    
	
	
	return 0;
}
