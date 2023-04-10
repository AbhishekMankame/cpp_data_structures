#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2==0){
			cout<<"-1";
		}
		else{
			n>>=1;
			cout<<"30 ";
			for(int i=29;i>=0;i--){
				printf("%d ",(n>>i)&1?2:1);
			}
		}
		cout<<endl;
	}
	return 0;
}
