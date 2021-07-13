#include <iostream>

using namespace std;

int main() {
	int arr[1001];

	int num = 1;
	int idx = 1;
	while (idx < 1001) {
		for(int i = 0; i < num && idx+i<1001; i++) {
			arr[idx + i] = num;
		}
		idx += num;
		num++;
	}

	int start, end;
	int answer = 0;

	cin >> start >> end;

	for (int i = start; i < end + 1; i++) {
		answer += arr[i];
	}

	cout << answer;

	return 0;
}