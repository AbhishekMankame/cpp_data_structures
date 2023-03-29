#include<bits/stdc++.h>
using namespace std;

// digit sum --> sum of digits present in a number
// digit_sum(N) -> digitdum(n/10) + last_digit
// 1234 -> 4 + digitsum(123)

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int digit_sum(int n){
    if(n==0) return 0;
    return digit_sum(n/10) + n%10;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<digit_sum(n)<<endl;
    }

    return 0;
}