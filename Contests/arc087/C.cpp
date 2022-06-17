#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int n; cin >> n;
	map<int, int> M;
  	for (int i = 0; i < n; i++) {
    	int a; cin >> a;
      	M[a]++;
    }
  	int ans = 0;
  	for (auto x : M) {
    	if (x.first > x.second) {
			ans += x.second;
        } else {
         	ans += (x.second - x.first);
        }
    }
  	cout << ans << "\n";
}
