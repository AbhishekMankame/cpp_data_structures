#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
        cin>>n;
        long long fact = 1;
        for(int i=2;i<=n;i++){
            fact = (fact*i)%M;
        }
        cout<<fact<<endl;
    
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
    clock_t b=clock();
    while(t--){
        solve();
    }
    clock_t e=clock();

    cerr<<"Run time: "<<e-b<<endl;
    cerr<<endl<<"Time Complexity is: O(T*N)=> O(N^2)"<<endl;
    
    return 0;
}