#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a1, b1;
		cin >> a1 >> b1;
		int a2, b2;
		cin >> a2 >> b2;
		// in order to produce a square, two lengths must be equal and
		// the remaining two lengths should add up to one of the equal lengths
		if (a1 == b2 && b1 + a2 == a1) {
			cout << "Yes";
		} else if (a2 == b1 && a1 + b2 == a2) {
			cout << "Yes";
		} else if (a1 == a2 && b1 + b2 == a1) {
			cout << "Yes";
		} else if (b1 == b2 && a1 + a2 == b1) {
			cout << "Yes";
		} else {
			cout << "No";
		}
		cout << '\n';
	}
	return 0;
}
