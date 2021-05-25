#include <bits/stdc++.h>

using namespace std;


int main()
{
    double radius;	
	double crust;
    
	cin >> radius >> crust ;
	
	double total =  ( ((radius - crust) * (radius - crust) ) / (radius * radius) ) * 100.0 ;
	cout << fixed << setprecision(6) << total ;
       
    
    return 0;
        
}
