#include <bits/stdc++.h> 
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int no = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+no);
	cout << (long long)arr[n-2]*arr[n-1];
}