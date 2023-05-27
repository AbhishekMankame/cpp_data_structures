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

// Brute force approach

int largestsubarraySum1(int arr[], int n){
    int largest_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarraySum=0;
            for(int k=i;k<=j;k++){
                subarraySum+=arr[k];
            }

            //put a check is subarraySum > largest_sum
            largest_sum = max(largest_sum,subarraySum);
            
        }
    }

    return largest_sum;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);

    cout<<largestsubarraySum1(arr,n)<<endl;

    return 0;
}