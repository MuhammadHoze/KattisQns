#include <bits/stdc++.h>

using namespace std;


int add(char n1, char n2) {
    return (n1 - '0' ) + (n2 - '0');
}

int main(void){
	
	
//	long long num1;
//	long long num2;
//	long long sum;
//	
//	cin >> num1;
//	cin >> num2;
//	
//	sum = num1 + num2;
//	
//	cout << sum << endl;


	string num1;
	string num2;
	string sum;
	
	int len1,len2;
	int carry = 0 , temp;
	
	cin >> num1;
	cin >> num2;
	
	len1 = num1.length() - 1;
	len2 = num2. length() - 1;
	
	
	
	for(; len1>=0 || len2>=0; len1--, len2--){
        if(len2 < 0) {
            temp = add(num1[len1], '0');
        } 
		else if (len1 < 0) {
            temp = add(num2[len2], '0');
        } 
		else {
            temp = add(num1[len1], num2[len2]);
        }
		temp += carry;
		if(temp > 9){
			
			carry = 1;
			temp -=10;		
		}
		else{
			
			carry = 0;
		}
		sum.insert(0,to_string(temp));
	
	}
	if(carry == 1){
		
		sum.insert(0,to_string(1));
	}
	cout << sum <<endl;

	return 0;
}



