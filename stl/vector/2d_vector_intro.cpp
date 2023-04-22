#include<bits/stdc++.h>
#include<vector>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9,10},{11,12}};
    for(int i=0;i<arr.size();i++){
        for(int j:arr[i]){
            cout<<j<<",";
        }
        cout<<endl;
    }
    cout<<endl;

    arr[0][0]+=10; //update

    for(int i=0;i<arr.size();i++){
        for(int j:arr[i]){
            cout<<j<<",";
        }
        cout<<endl;
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

