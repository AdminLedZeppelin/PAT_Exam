#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int a[4][4];
int backup[4][4];
void turn(int x, int y){
    for(int i=0; i<4; i++){
        a[i][y] ^= 1;
        a[x][i] ^= 1;
    }
    a[x][y] ^= 1;
}

bool check(){
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++){
            if(a[i][j])
                return false;
        }
    return true;
}
int main(){
    char c;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++){
            cin>>c;
            if(c=='-')
                a[i][j]=0;
            else
                a[i][j] = 1;
        }

    int res = 0x3f;
    for(int i=0; i<(1<<16); i++){
        int ans = 0;
        memcpy(backup, a, sizeof a);
        for(int j=0; j<16; j++)
            if(i & 1<<j){
                int x = j/4;
                int y = j%4;
                turn(x,y);
                ans++;
            }

        if(check()){
            res = min(res, ans);
            cout<<res<<endl;
            for(int j=0; j<16; j++)
                if(i & 1<<j){
                    int x = j/4;
                    int y = j%4;
                    cout<<x+1<<" "<<y+1<<endl;
                    ans++;
                }
        }
        memcpy(a, backup, sizeof backup);
    }
    return 0;
}