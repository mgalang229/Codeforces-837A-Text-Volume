#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin.ignore();
	getline(cin, s);
	int cnt = 0;
	int ans = INT_MIN;
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			// count the number of capital letters in a word
			cnt++;
		} else if (s[i] == ' ') {
			// reset counter if it encounters a space
			ans = max(ans, cnt);
			// get the maximum value
			cnt = 0;
		}
	}	
	// this for one word input
	ans = max(ans, cnt);
	cout << ans << '\n';
 	return 0;
}