#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

void hubble_sort(int a[], int n){
    for(int times=1;times<=n-1;times++){
        for(int j=0;j<=n-times-1;j++){
            if(compare(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){ 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    auto start_time = clock();
    
    auto end_time = clock();

    cout<<end_time - start_time<<endl;
    return 0;
}