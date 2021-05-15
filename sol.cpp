#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v;
	while (n > 0) {
		// separate the digits one-by-one and store it in the vector
		v.emplace_back(n % 10);
		n /= 10;
	}
	// reverse the order of the vector
	reverse(v.begin(), v.end());
	// set 'checker' to true (initial value)
	bool checker = true;
	for (int i = 0; i < (int) v.size(); i++) {
		if (v[i] == 1)  {
			// if the current element is 1, then continue the loop
			continue;
		}
		if (i - 2 >= 0 && v[i] == 4) {
			// if the current element is 4 and index 'i' - 2 is >= 0,
			// then check if the second previous element is 1 and the
			// if the previous element is 4 (forming "144")
			if (v[i - 2] == 1 && v[i - 1] == 4) {
				// if yes, then continue the loop
				continue;
			}
		}
		if (i - 1 >= 0 && v[i] == 4) {
			// if the current element is 4 and index 'i' - 1 is >= 0,
			// then check if the previous element is 1 (forming "14")
			if (v[i - 1] == 1) {
				// if yes, then continue the loop
				continue;
			}
		}
		// otherwise, set 'checker' to false if the conditions above are false
		checker = false;
		break;
	}
	cout << (checker ? "YES" : "NO") << '\n';
	return 0;
}
