#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1, s2;
	int arr1[27] = {}, arr2[27] = {}, num = 0;

	//입력
	cin >> s1 >> s2;
	
	//각각 알파벳 개수 세기
	for (int i = 0; i < s1.length(); i++) {
		arr1[s1[i] - 'a']++;
	}
	for (int i = 0; i < s2.length(); i++) {
		arr2[s2[i] - 'a']++;
	}

	//알파벳 개수 차이 구하기
	for (int i = 0; i < 27; i++) {
		if (arr1[i] >= arr2[i]) num += arr1[i] - arr2[i];
		else num += arr2[i] - arr1[i];
	}

	//출력
	cout << num;

	return 0;

}