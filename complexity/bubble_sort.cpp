#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

void bubble_sort(vector<int> &arr, int n){
    for(int times=1;times<=n-1;times++){
        for(int j=0;j<=n-times-1;j++){
            if(compare(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
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

    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        arr[i]=n-i;
    }

    auto start_time = clock();
    bubble_sort(arr,n);
    auto end_time = clock();

    auto start_time1 = clock();
    sort(arr.begin(),arr.end());
    auto end_time1 = clock();

    cout<<"Bubble Sort: "<<end_time - start_time<<endl;
    cout<<"O(NlogN) Sort: "<<end_time1 - start_time1<<endl;
    return 0;
}