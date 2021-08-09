// C++ program to find the element
// occurring odd number of times
#include <bits/stdc++.h>
using namespace std;

// Function to find element occurring
// odd number of times
int getOddOccurrence(int ar[], int ar_size)
{
	int res = 0;
	for (int i = 0; i < ar_size; i++)
		res = res ^ ar[i];

	return res;
}

/* Driver function to test above function */
int main()
{
	
	cin >> int n;
	int arr[n];
    cin >> arr;f
	int n = sizeof(ar)/sizeof(ar[0]);

	// Function calling
	cout << getOddOccurrence(ar, n);

	return 0;
}
