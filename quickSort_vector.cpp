#include <bits/stdc++.h>
using namespace std;


//VECTOR METHOD 

void quicksort(vector<int> &vec, int L, int R) {
    int i, j, mid, piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = vec[mid]; //pivot is in the middle 

    while (i<R || j>L) {
        while (vec[i] < piv)
            i++;
        while (vec[j] > piv)
            j--;

        if (i <= j) {
            swap(vec[i], vec[j]);  //STL swap handle 
            i++;
            j--;
        }
        else {
            if (i < R)
                quicksort(vec, i, R);
            if (j > L)
                quicksort(vec, L, j);
            return;
        }
    }
}



int main() {
    
    int n;
	vector<int> nums;
	
	cin>>n; //no of elements 

	for(int i=0;i<n;i++){
		int value;
		
		cin >> value;
		nums.push_back(value);
	}
    
    quicksort(nums, 0, n - 1);
    
    for(auto &v: nums){
 		
		cout << v << " ";
	}

}

