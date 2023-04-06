#include "bits/stdc++.h"

using namespace std;

#define ll long long

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t; cin >> t;
  while (t--) {

    ll n, k; cin >> n >> k;

    if (k % 2 == 0) {
      cout << (n % 2 == 0 ? "YES\n" : "NO\n");
    }
    else {
      cout << "YES\n";

    }

  }
  
}