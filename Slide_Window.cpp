/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
const int MAX = 300000;
long long sum[MAX];
int q[MAX];

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    
    /* 
    Confused m, n.
    */
    int l = 1,r = 1;
    q[1] = 0;
    long long ans = sum[1];
    /* Slide Window */
    for(int i = 1;i <= m;i++) { 
        while(l <= r && i - q[l] > n) l++;
        ans = max(ans,sum[i] - sum[q[l]]);
        while(l <= r && sum[q[r]] >= sum[i]) r--;
        q[++r] = i;
    }
    cout << ans << endl;
    return 0;
}
