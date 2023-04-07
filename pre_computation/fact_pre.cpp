#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M = 1e9+7;
const int N = 1e5+10;
ll fact[N];

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }
    
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}