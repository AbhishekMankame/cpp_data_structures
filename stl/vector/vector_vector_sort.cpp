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

    vector<pair<string,vector<int>>> student_marks = {
        {"Rohan",{10,20,11}},
        {"Prateek",{10,21,3}},
        {"Vivek",{4,5,6}},
        {"Rijul",{10,13,20}}
    };

    return 0;
}