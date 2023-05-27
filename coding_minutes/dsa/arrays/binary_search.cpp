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

int binary_search(int arr[],int n, int key){

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int arr[] = {10,20,30,40,50,60,70,89};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = binary_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not found!"<<endl;
    }

    return 0;
}