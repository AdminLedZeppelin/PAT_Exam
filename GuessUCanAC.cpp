#include <iostream>
using namespace std;
int temp = 0;
int findoutlastone(int num) {
    if (num == 0) {
        temp = 1;
    }
    else if (num <= 2) {
        temp = num;
    }
    else if (num == 3) {
        temp = 6;
    }
    else if (num == 4) {
        temp = 4;
    }
    else
        temp = 0;
}
int f[10000000];
int main() {
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        findoutlastone(x);
        for (int i = 0; i < n; i++) {
            f[i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << f[i] << endl;
        cout << endl;
    }

    return 0;
}
