#include<bits/stdc++.h>
#include<vector>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    vector<int> arr(100);
    for(int i=0;i<100;i++){
        cin>>arr[i];
    }
    for(auto i:arr){
        cout<<i<<" ";
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

/*
Complexity:
Constant(amortized time, reallocation may happen).
If a reallocation happens, the reallocation is itself up to linear in the entire size.
*/
