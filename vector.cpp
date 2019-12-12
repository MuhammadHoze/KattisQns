#include <bits/stdc++.h>
using namespace std;

void print(vector<int> V) {
	for (auto j : V) cout << j << " ";
		cout << endl;
}

int main() {
	vector<int> v = {1,8,4,12,10,-2}; //initialise your vector

	v.push_back(12); v.push_back(-5); //insert elements at the back, vector will now be: 1 8 4 12 10 -2 12 -5, O(1)
	print(v);

	v.pop_back(); //removes last element in the vector, vector will now be: 1 8 4 12 10 -2 12, O(1)
	print(v);

	v.insert(v.begin() + 4, 5); //insert element 5 at index 4 in the vector, vector will now be: 1 8 4 12 5 10 -2 12, O(n)  START FROM INDEX 0
    print(v);

	v.erase(v.begin() + 3); //remove element at index 4 in the vector, 12 is removed . vector will now be: 1 8 4 5 10 -2 12, O(n)
    print(v);

	v.clear(); //remove all elements from the vector, O(n)

	v.reserve(20); //allocate a size of 20 to the vector, O(n) where n is the new vector size
	v.assign(10, -1); //allocate a size of 10 AND initialise all their values to be -1. NOTE: Size has now been changed from 20 to 10, O(n) where n is the new vector size
	print(v);

	v.resize(15); //changes size of the vector. If the number specified (i.e. 15 in this case) is larger than the current vector size,
	// all remaining values are initialised to 0 (i.e. 5 zeroes at the end), O(n) where n is the new vector size
    print(v);

	v.clear();	// O(n)
	if (v.empty()) cout << "The vector is empty" << endl; //check if vector is empty, O(1)

	return 0;
}
