#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int sets;
	cin >> sets;
	
	for(int i=0; i<sets; i++){
		int sum1 = 0;
		int sum2 = 0;
		int sum3 = 0;
		int total,len;
		string value;
		
		cin >> value;
		//reverse(value.begin(),value.end());
		//cout << value << endl;
		
		len = value.length();
		//cout << len;
		
		for(int j=len-1; j>=0; j-=2){
			
			sum1 += value[j] - 48; //what does '0' mean??? BECAUSE VALUE IS A STRING. ASCII CHAR THEREFORE MINUS '0' OR 48
		
		}

		
		for(int k=len-2; k>=0; k-=2){
			int temp = 0;
			
			temp = 2 * (value[k] - 48 );
			
			if (temp > 9){
				while(temp != 0){

					sum3 += temp % 10;
					temp /= 10; 
				}		
			}
			else
				sum2 += temp;
			
		}
		
		total = sum1 + sum2 + sum3;
		//cout << total << endl;	
		
		if (total % 10 == 0){
			
			cout << "PASS" << endl;
		}
		else
			cout << "FAIL" << endl;
		
	}
	return 0;
}	
	
//	for(int i=0; i<sets; i++){
//		long long value;
//		int sum1 = 0;
//		int sum2 = 0;
//		int sum3 = 0;
//		int total;
//		
//		cin >> value;
//		
//		while (value != 0){
//			int temp=0;
//			
//			sum1 += value % 10;
//			value /= 10;
//			
//			temp = 2 * (value % 10);
//			
//			if (temp > 9){
//				while(temp != 0){
//
//					sum3 += temp % 10;
//					temp /= 10; 
//				}
//				value /= 10;
//			}
//			
//			else{
//					
//				sum2 += temp;
//				value /= 10;
//			}
//			
//		}
//		
//		total = sum1 + sum2 + sum3;
//	
//		cout << total << endl;
//		
//		if (total % 10 == 0){
//			
//			cout << "PASS" << endl;
//		}
//		else
//			cout << "FAIL" << endl;
//		
//	}

