#include <iostream>

using namespace std;

int room = 0;

int roomNum(int i, int k) {

	if (i % k == 0) { //i가 짝수
		room += i / k;
	}
	else {
		room += i / k + 1;
	}

	return room;
}

int main() {

	int n, k, s, g;
	int boy[7] = {}, girl[7] = {};

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> s >> g;

		if (s == 0) girl[g]++;
		else boy[g]++;
	}

	for (int i = 1; i < 7; i++) {
		if (girl[i] > 0) roomNum(girl[i], k);
		if (boy[i] > 0) roomNum(boy[i], k);
	}

	cout << room;

	return 0;

}