#include<iostream>
using namespace std;

int main() {
    int total = 0;
    while (!cin.eof()) {
        int n;
        cin >> n;
        total += n;
    }
    for (int i = 0; i < total; i++) {
        int a = i;
        cout << "<vector><set><map><queue><stack><list>";
        if (++a < total) {
            cout << endl;
        }
    }
    return 0;
}
