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

// Largest subarray sum using prefix sum method

int largestSubarraySum2(int arr[], int n){


}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();

    return 0;
}