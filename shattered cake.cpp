#include <iostream>

using namespace std;


int main()
{
	
	int width = 0;
	int iteration = 0;
	int total = 0 ;
	
	
	cin >> width;
	cin >> iteration;
	
	for (int i = 0; i < iteration; i++) {
		
		int l = 0;
		int w = 0;
		
		cin >> l >> w;
		total += l * w;
	}
	
	cout << total / width;
		
	return 0;
		
}
