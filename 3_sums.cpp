#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// Prints all triplets in arr[] with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == 0)
                {
                    int temp_arr[3];
                    temp_arr[0] = arr[i];
                    temp_arr[1] = arr[j];
                    temp_arr[2] = arr[k];
                    sort(temp_arr, temp_arr + 3);
                    cout << temp_arr[0] << " "
                         << temp_arr[1]<< " "
                         << temp_arr[2];
                    }

                    found = true;
                }
            }
        }


    // If no triplet with 0 sum found in array
    if (found == false)
        cout << "No Solution";

}

// Driver code
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
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplets(arr, total);
    return 0;
}
