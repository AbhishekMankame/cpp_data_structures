/*
Given array a of N integers. Give Q queries and in each query given L and R print sum of array elements from index L to R(L,R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N

*/

/*Prefix sum*/
#include<bits/stdc++.h>
using namespace std; 
const int N=1e5+10; 
int a[N];

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}