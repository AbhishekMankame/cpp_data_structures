#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int a=0;
    cout<<~a<<endl;
    cout<<~~a<<endl;


    //check odd or even
    int x;
    cin>>x;
    if(x&1){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }

    int x1;
    cin>>x1;
    if(x1&1){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }

    return 0;
}