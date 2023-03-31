#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        int al=0,bo=0,co=0;
        while(a1--){
            al++;
            bo++;
            co++;
        }
        while(a2--){
            al++;
            bo--;
            co++;
            if(bo<0){
                cout<<co<<endl;
                break;
            }
        }
        while(a3--){
            al--;
            bo++;
            co++;
            if(al<0){
                cout<<co<<endl;
                break;
            }
        }
        while(a4--){
            al--;
            bo--;
            co++;
            if(al<0 or bo<0){
                cout<<co<<endl;
                break;
            }
        }
        cout<<co<<endl;
    }
}