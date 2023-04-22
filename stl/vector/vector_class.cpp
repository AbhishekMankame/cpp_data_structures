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

class Vector{
    // Data Members
    int *arr;
    int cs;
    int ms;

public:
    Vector(){
        cs=0;
        ms=1;
        arr=new int[ms];
    }

    void push_back(int d){
        // Two cases
        if(cs==ms){
            // create a new array and delete the old one, double the capacity
        }

        arr[cs]=d;
        cs++;
    }
    
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    
    Vector v;

    return 0;
}