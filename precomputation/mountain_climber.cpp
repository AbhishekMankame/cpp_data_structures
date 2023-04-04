// mountain climbers ---> codeforces problem

#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main () {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        int brn = 0, u = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'l' || s[j] == 'd' || s[j] == 'f' || s[j] == 'b' || s[j] == 'h' || s[j] == 'k' || s[j] == 't')
                brn++;
            if (s[j] == 'q' || s[j] == 'g' || s[j] == 'j' || s[j] == 'p' || s[j] == 'y')
                brn--;
            if (brn < 0) u = 1;
        }
        if (brn == 0 && u == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}