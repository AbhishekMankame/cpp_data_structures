/*
Large Addition:
Given two large numbers. The numbers may not fit into long long int, the task is to add these two numbers.

Input:
str1 = "3333311111111111"
str2 = "44422222221111"

Output:
3377733333332222
*/

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

char digitToChar(int digit){
    return digit +'0';
}

int charToDigit(char ch){
    return ch-'0';
}

string addNumbers(string n1, string n2){
    // Make sure N2 is larger
    if(n1.length()>n2.length()){
        swap(n1,n2);
    }

    //Result
    string result="";
    // Reverse
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end()); 
    
    // Add digits upto n1.length()
    for(int i=0;i<n1.length();i++){
        int d1 = charToDigit(n1[i]);
        int d2 = charToDigit(n2[i]);
    }

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    // int t=1;
    // cin>>t;
    // while(t--){
    //     solve();
    // }

    string s1,s2;
    cin>>s1>>s2;

    string result = addNumbers(s1,s2);

    return 0;
}