#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int hr,min;
	cin >> hr >> min;
	
	--hr;
	min += 15; // 60-45 = 15min
	if(hr < 0){
		
		hr+=24;
	}
	if(min >=60){
		
		min-=60;
		++hr;
	}
	
	cout << hr << " " << min << endl;
	
	return 0;
}
