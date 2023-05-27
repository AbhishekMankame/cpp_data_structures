#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b){
    if(b==0) return a;
    else{
        return gcd(b,a%b);
    }
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void printSubarray(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //cout<<"("<<i<<","<<j<<") ";
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
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
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);

    printSubarray(arr,n);

    return 0;
}