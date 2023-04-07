/*
Given array a of N integers. Given Q queires and in each query given a number X, print counnt of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;++i){
            if(a[i]==x){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}

// Time Complexity -> O(N) + O(Q*N)