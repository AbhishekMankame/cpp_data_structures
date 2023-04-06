#include<bits/stdc++.h>
using namespace std;

#define INF 1234567890
#define ll long long

int T;
ll N, K;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

#endif
	ios::sync_with_stdio(0); cin.tie(0);
	cin.exceptions(ios::badbit | ios::failbit);
	cin >> T;
	while(T--)
	{
		cin >> N >> K;
		if (N%2 == 0) cout << "YES\n";
		else if (N%2 == K%2) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}