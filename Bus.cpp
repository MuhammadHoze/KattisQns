#include <bits/stdc++.h>

using namespace std;


int main()
{      
    int iteration;
    
    cin >> iteration;
    //cout << setprecision(10);
    
    for(int i = 0; i < iteration; i++) {
            
        
        int total;
        
        cin >> total;
        
        cout <<  setprecision(10) << pow(2,total) - 1 << endl;
    }
    
    return 0;
        
}
