#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hsh[N];

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        hsh[i]++;
    }
    for(int i=1;i<=n;i++){
        cout<<hsh[i]<<endl;
    }


    return 0;
}