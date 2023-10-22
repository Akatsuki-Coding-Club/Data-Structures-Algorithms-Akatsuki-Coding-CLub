#include <bits/stdc++.h>
using namespace std;

void CountFrequency(int arr[], int n)
{
	unordered_map<int, int> mp;

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	// Traverse through map and print frequencies
	for (auto x : mp)
		cout << x.first << " " << x.second << endl;
}

int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	CountFrequency(arr, size);
	return 0;
}
