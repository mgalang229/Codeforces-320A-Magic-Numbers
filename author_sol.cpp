#include <bits/stdc++.h>

using namespace std;

bool is_magical(string number) {
	for (int i = 0; i < (int) number.size(); i++) {
		if (number[i] != '1' && number[i] != '4') {
			// return false if it contains a number that is not 1 or 4
			return false;
		}
	}
	if (number[0] == '4') {
		// if the first number is 4, then it cannot be 14 or 144 anymore
		return false;
	}
	if (number.find("444") != number.npos) {
		// if it contains 444, then return false
		return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string number;
	cin >> number;
	// check if the number if magical using the function above
	if (is_magical(number)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}
