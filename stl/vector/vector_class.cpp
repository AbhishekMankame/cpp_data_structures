#include<bits/stdc++.h>
#include "vector.h"
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



int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    
    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<v.at(3)<<endl;

    // printing all the elements
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<",";
    }
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }

    cout<<endl;

    return 0;
}