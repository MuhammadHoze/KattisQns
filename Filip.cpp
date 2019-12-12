#include <bits/stdc++.h>

/*



*/


using namespace std;


//int flip(string number){
//	int len, value;
//	
//	//len = number.length();
//	
//	 reverse(number.begin(), number.end());
//	 
//	 value = atoi(number);  //having error here
//	 
//	 return value;
//	
//}
	


int main(void){
	
	int num1;
	int num2;
	int number_1,number_2;	
	string first,second;

	
	cin >> num1 >>  num2;
	
	
	first = to_string(num1); //convert int to string
	//number_1 = flip(first);
	
	second = to_string(num2); //convert int to string
	//number_2 = flip(second);
	
	reverse(first.begin(), first.end());
	reverse(second.begin(), second.end());
	
		if (first > second){
		
		cout << first;
		
	
	}
	else{
	
		cout << second;
	}
	
	
	
//	if (number_1 > number_2){
//		
//		cout << number_1;
//		
//	
//	}
//	else{
//	
//		cout << number_2;
//	}
//	
	return 0;
}





