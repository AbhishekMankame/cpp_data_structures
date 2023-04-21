#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    pair<int,string> p;
    // Adding elements or values to the pair
    // internal function --> make_pair()
    p = make_pair(2,"abd");
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    // another method
    pair<int,string> s;
    s={5,"abc"};
    pair<int,string> &p1=p;
    p1.first=7;
    cout<<p1.first<<" "<<s.second<<endl;
    cout<<s.first<<" "<<p1.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}