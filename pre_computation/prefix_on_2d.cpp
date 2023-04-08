/*
Given 2d array a of N*N integers. Given Q queries and in each query given a, b, c and d print sum of square represented by (a,b) as top left point and (c,d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e3+10;
int a[N][N];

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
}