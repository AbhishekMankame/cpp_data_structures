// Tabulation method

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int n=20;
    int fib[n+1];
    fib[1]=fib[2]=1;
    int cnt=0;
    for(int i=3;i<=n;i++){
        fib[i]=fib[i-1] + fib[i-2];
    }


    return 0;
}