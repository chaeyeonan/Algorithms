#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n, arr[1001] = {};

	cin >> n;
	for (int i = 0; i < n; i++) {
		string s, k;
		cin >> s >> k;

		sort(s.begin(), s.end());
		sort(k.begin(), k.end());

		if (s == k) arr[i] = 1;
	}
	
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) cout << "Possible" << "\n";
		else cout << "Impossible" << "\n";
	}

	return 0;

}