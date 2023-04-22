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

    vector<int> arr ={10,11,2,3,4,6,7,8};
    int key=11;
    vector<int>::iterator it = find(arr.begin(),arr.end(),key);
    if(it!=arr.end()){
        cout<<it-arr.begin();
    }

}
