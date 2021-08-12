#include<bits/stdc++.h>
using namespace std;

int main() {
    int a; 
    cin>>a;
    map<int, int>mp;
    for(int i = 0; i<a; i++){
        mp.clear();
        bool flag = false;
        int m,n,v;
        cin >> m >> n;
        for(int j = 0 ; j < m; j++){
            cin>>v;
            mp[v]++;
        }
        for(int j=0;j<n;j++){
            cin>>v;
            mp[v]--;
            if(mp[v]<0)
            flag=true;
        }
        if(flag)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
}