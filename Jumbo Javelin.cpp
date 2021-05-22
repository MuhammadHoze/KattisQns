#include <iostream>

using namespace std;


int main()
{
	
	int width = 0;
	int iteration = 0;
	int total = 0 ;
	

	cin >> iteration;
	
	for (int i = 0; i < iteration; i++) {
		
		int w = 0;
		
		cin >> w;
		total += w;
	}
	
	cout << total - (iteration - 1);
		
	return 0;
		
}
