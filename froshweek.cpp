//// C++ program to Count 
//// Inversions in an array 
//// using Merge Sort 
//#include <bits/stdc++.h> 
//using namespace std; 
//
//
//int merge(vector <long long> &arr, long long temp[], int left, int mid, int right){ 
//	int i, j, k; 
//	long long inv_count = 0; 
//
//	i = left;
//	j = mid; 
//	k = left; 
//	while ((i <= mid - 1) && (j <= right)) { 
//		if (arr[i] <= arr[j]) { 
//			temp[k++] = arr[i++]; 
//		} 
//		else { 
//			temp[k++] = arr[j++]; 
//
//			inv_count = inv_count + (mid - i); 
//		} 
//	} 
//
//	//This while loop is if the 1st array has remaining values
//	while (i <= mid - 1) 
//		temp[k++] = arr[i++]; 
//
// 	//This while loop is if the 2nd array has remaining values 
//	while (j <= right) 
//		temp[k++] = arr[j++]; 
//
//	//We need to copy all element to original arrays
//	for (i = left; i <= right; i++) 
//		arr[i] = temp[i]; 
//
//	return inv_count; 
//} 
//
//
///* An auxiliary recursive function that sorts the input array and 
//returns the number of inversions in the array. */
//int _mergeSort(vector <long long> &arr, long long temp[], int left, int right) 
//{ 
//	int mid, inv_count = 0; 
//	if (right > left) {
//	 
//		//1. Divide
//		mid = (right + left) / 2; 
//
//		// 2. Recursively divide the vector
//		inv_count = _mergeSort(arr, temp, left, mid); // divide the vector into a single element from start to mid
//		inv_count += _mergeSort(arr, temp, mid + 1, right); // divide the vector into a single element from mid+1 to end
//		
//		// 3. Sort & merge the two parts
//		inv_count += merge(arr, temp, left, mid + 1, right); 
//	} 
//	return inv_count; 
//}
//
//
//// sorts the input array and returns the number of inversions
//int mergeSort(vector <long long> &arr, long long array_size) 
//{ 
//	long long temp[array_size]; 
//	return _mergeSort(arr, temp, 0, array_size - 1); 
//} 
//
//
//
//int main() 
//{ 
//
//	long long n;
//	vector<long long> arr;
//	
//	cin >> n;
//	
//	for(int i=0; i<n; i++){
//		long long value;
//		
//		cin >> value;
//		arr.push_back(value);
//	}
//	
//	//int arr[100000];
//	
//	//cin >> n;
//	
//	
////	for(int i=0; i<n; i++){
////		//long long value;
////		
////		cin >> arr[i];
////		//number.push_back(value);	
////	} 
//	
//	long long ans = mergeSort(arr, n); 
//	cout << endl;
//	cout << ans;
//	return 0; 
//} 
//


#include <bits/stdc++.h> 
using namespace std; 
long long count;

int array1[1000005];
int array2[1000005];

void mergesort(int *array, int len, int offset)
{
    if (len > 1)
    {
        int *first = array1 + offset;
        if (first == array)
            first = array2 + offset;
        
        for (int i = 0; i < len; ++i)
            first[i] = array[i];
        
        int firstLength = len / 2;
        int secondStart = firstLength, secondLength = len - secondStart;
        int *second = first + secondStart;
        
        mergesort(first, firstLength, offset);
        mergesort(second, secondLength, offset + secondStart);
        
        int i = 0, j = 0;
        int pos = 0;
        
        int currentCost = count;
        
        while (i < firstLength && j < secondLength)
        {
            if (first[i] < second[j])
                array[pos++] = first[i++];
            else
            {
                array[pos++] = second[j++];
                count += firstLength - i;
            }
        }
        
        for (; i < firstLength; ++i, ++pos)
            array[pos] = first[i];
        for (; j < secondLength; ++j, ++pos)
            array[pos] = second[j];
    }
}

int main()
{
    int N;
    
    while (cin >> N)
    {
        for (int i = 0; i < N; ++i)
            cin >> array1[i];
        
        mergesort(array1, N, 0);
        
        cout << count << '\n';
        count = 0;
    }
}

