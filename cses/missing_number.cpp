#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    ll n,s=0;
    cin>>s;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        s+=a;
    }
    cout<<n*(n+1)/2-5<<endl;


    return 0;
}