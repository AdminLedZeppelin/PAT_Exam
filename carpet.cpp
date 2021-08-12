#include <bits/stdc++.h>
using namespace std;
int m,n;
const int N = 1000;
int a[N][N];
int final[N][N];

int main(){
    cin >> n>> m;
     memset(a,0,sizeof(a));
     memset(final,0,sizeof(final));
    for (int j = 0; j < m; j++) {
        int x1,y1,x2,y2;
        cin>> x1>> y1 >> x2 >> y2;
        for(int i = x1; i <= x2; i++){
            a[i][y1]++;
            a[i][y2 + 1]--;
        }
    }


    for(int i = 1;i <= n; i++) {
        int present =0;
        for(int j = 1;j <= n; j++) {
            present += a[i][j];
            final[i][j] = present;
        }
    }
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= n; j++) {
            if(j > 1)
                {
                     cout<<" ";
                }
            cout << final [i][j];
        }
        cout<<endl;
    }
    return 0;
}
