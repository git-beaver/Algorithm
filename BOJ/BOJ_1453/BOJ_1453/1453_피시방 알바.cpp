#include <iostream>
#include <array>

using namespace std;

int main() {
	int N;
	bool person[101] = { false };
	int fail = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		if (person[num]) fail++;
		else person[num] = true;
	}

	cout << fail << endl;

	return 0;
}