#include<bits/stdc++.h>
using namespace std;

// Selection Sort
void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    auto start_time = clock();
    for(int i=0;i<n;i++){
        int minIndex = i;
        for (int j = i+1;j<n;j++)
        {
            if(a[j]<a[minIndex]){
                minIndex=j;
            }
        }
        swap(a[i],a[minIndex]);
    }
    auto end_time = clock();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cerr<<end_time-start_time<<endl;
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
        solve();
    }
    return 0;
}

//Time Complexity --> O(n^2)