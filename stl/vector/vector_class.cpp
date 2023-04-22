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
    Vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr=new int[ms];
    }

    void push_back(int d){
        // Two cases
        if(cs==ms){
            // create a new array and delete the old one, double the capacity
            int *oldArr = arr;
            ms = 2*ms;
            arr = new int[ms];
            //copy the elements
            for(int i=0;i<cs;i++){
                arr[i]=oldArr[i];
            }

            //delete
            delete oldArr;
        }

        arr[cs]=d;
        cs++;
    }

    void pop_back(){
        if(cs>=0){
            cs--;
        }
    }

    bool isEmpty(){
        return cs==0;
    }

    // Front, Back, At(i), operator overloading []
    int front(){
        return arr[0];
    }

    int back(){
        return arr[cs-1];
    }

    int at(int i){
        return arr[i];
    }

    int size(){
        return cs;
    }

    int capacity(){
        return ms;
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
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}