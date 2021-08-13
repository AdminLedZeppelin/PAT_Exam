#include <bits/stdc++.h>
using namespace std;

/* A naive solution to print all combination
of 4 elements in A[]with sum equal to X */
int findFourElements(int A[], int n, int X)
{

// Fix the first element and find other three
for (int i = 0; i < n - 3; i++)
{
    // Fix the second element and find other two
    for (int j = i + 1; j < n - 2; j++)
    {

        // Fix the third element and find the fourth
        for (int k = j + 1; k < n - 1; k++)
        {
            // find the fourth
            for (int l = k + 1; l < n; l++) {
                if (A[i] + A[j] + A[k] + A[l] == X) {
                    return 1;
                }
            }

        }
    }
}
    return 0;
    }


// Driver Code
int main()
{
    int total;
    cin >> total;
    int arr[total];
    for (int i = 0; i < total; i++) {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 0;
    int final = findFourElements (arr, total, X);
    if (final  == 1) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
