#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    vector<int> haystack;
    for(int i=1;i<10;i++){
        haystack.push_back(i*10);
    }

    int niddle1[] = {40,50,60,70};
    vector<int>::iterator it;
    it = search(haystack.begin(),haystack.end(),niddle1,niddle1+4);



    return 0;
}