#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int cnt=0;
int fib(int n){
    cnt++;
    if(n<=2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    cout<<fib(6)<<'\n';
    cout<<cnt<<'\n';

    return 0;
}