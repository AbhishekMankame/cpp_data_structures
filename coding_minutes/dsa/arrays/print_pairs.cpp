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

void printAllPairs(int arr[], int n){
    for(int i=0;i<n;i++){
        int x = arr[i];
        for(int j=i+1;j<n;j++){
            int y=arr[j];
            cout<<x<<","<<y<<endl;
        }
    }

}

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
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

    //print all the elements of array
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}