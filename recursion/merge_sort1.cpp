#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void merge(int l, int r, int mid){
    int l_sz = mid-l+1;
    int L[l_sz+1];
    int r_sz = r - mid; // r_sz = r - (mid + 1) + 1
    int R[r_sz+1];
    for(int i=0;i<l_sz;i++){
        L[i] = a[i+l];
    }
    for(int i=0;i<r_sz;i++){
        R[i]=a[i+mid+1];
    }
    L[l_sz] = R[r_sz] = INT_MAX;
    int l_i=0;
    int r_i=0;
    for(int i=l;i<r;i++){
        if(L[l_i]<= R[r_i]){
            a[i]=L[l_i];
            l_i++;
        }
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

    }

    return 0;
}