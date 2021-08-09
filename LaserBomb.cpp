#include <iostream>

using namespace std;
int n, r;
const int N = 5000;
int f[N][N];

int main() {
    cin >> n >> r;
    int xm = r, ym = r;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        x++;
        y++;
        f[x][y] = w;
        xm = max(xm, x);
        ym = max(ym, y);
    }

    for (int i = 1; i <= xm; i++) {
        for (int j = 1; j <= ym; j++) {
            f[i][j] += f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
        }
    } 
    for (int i = r; i <= xm; i++) {
        for (int j = r; j <= ym; j++) {
            sum = max(sum, f[i][j] + f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1]);
        }
    }
    cout << sum << endl;
    return 0;

}

//二位前缀和。

// array[i][j]
// s -> sum
// value -> present key value.

// s[i][j] = value[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];